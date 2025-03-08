// Fill out your copyright notice in the Description page of Project Settings.

#include "Muro.h" // Incluye el archivo de encabezado de la clase AMuro.
#include "Components/StaticMeshComponent.h" // Incluye la clase UStaticMeshComponent.

// Constructor de la clase AMuro.
AMuro::AMuro()
{
	// Indica que este actor debe llamar a la funci�n Tick() en cada fotograma.
	// Puedes desactivarlo si no necesitas actualizaciones por fotograma.
	PrimaryActorTick.bCanEverTick = true;

	// Crea un componente de malla est�tica y lo asigna a MallaMuro.
	MallaMuro = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaMuro"));
	// Asigna la malla como componente ra�z del actor.
	// RootComponent = MallaMuro; // (Comentado) Esto har�a que MallaMuro sea el componente ra�z.
	MallaMuro->SetupAttachment(RootComponent); // En su lugar, lo adjunta al componente ra�z.

	// Busca un archivo de malla est�tica en el contenido del proyecto.
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMallaMuro(
		TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'")
	);

	// Si se encuentra la malla, la asigna al componente MallaMuro.
	if (ObjetoMallaMuro.Succeeded())
	{
		MallaMuro->SetStaticMesh(ObjetoMallaMuro.Object); // Asigna la malla.
		MallaMuro->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f)); // Establece la posici�n inicial.
	}

	// Inicializa las variables de velocidad y movimiento.
	FloatSpeed = 5.0f; // Velocidad de flotaci�n.
	RotationSpeed = 3.0f; // Velocidad de rotaci�n.
	mPuedeMoverse = FMath::RandBool(); // Decide aleatoriamente si el muro puede moverse.
}

// Llamado cuando el juego comienza o cuando el actor es creado.
void AMuro::BeginPlay()
{
	Super::BeginPlay(); // Llama a la implementaci�n base de BeginPlay().
}

// Llamado en cada fotograma.
void AMuro::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime); // Llama a la implementaci�n base de Tick().

	// Si el muro puede moverse, realiza las actualizaciones de posici�n y rotaci�n.
	if (mPuedeMoverse)
	{
		// Obtiene la ubicaci�n y rotaci�n actual del actor.
		FVector NewLocation = GetActorLocation();
		FRotator NewRotation = GetActorRotation();
		float RunningTime = GetGameTimeSinceCreation(); // Tiempo transcurrido desde la creaci�n del actor.

		// Calcula un desplazamiento aleatorio en el eje Z.
		float DeltaHeight = FMath::FRandRange(-1.0f, 1.0f) * FloatSpeed;
		NewLocation.Z += DeltaHeight;

		// Calcula una rotaci�n aleatoria en el eje Yaw (eje Z).
		float DeltaRotation = FMath::FRandRange(-1.0f, 1.0f) * RotationSpeed;
		NewRotation.Yaw += DeltaRotation;

		// Aplica la nueva ubicaci�n y rotaci�n al actor.
		SetActorLocationAndRotation(NewLocation, NewRotation);
	}
}