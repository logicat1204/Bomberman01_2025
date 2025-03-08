// Fill out your copyright notice in the Description page of Project Settings.

#include "Muro.h" // Incluye el archivo de encabezado de la clase AMuro.
#include "Components/StaticMeshComponent.h" // Incluye la clase UStaticMeshComponent.

// Constructor de la clase AMuro.
AMuro::AMuro()
{
	// Indica que este actor debe llamar a la función Tick() en cada fotograma.
	// Puedes desactivarlo si no necesitas actualizaciones por fotograma.
	PrimaryActorTick.bCanEverTick = true;

	// Crea un componente de malla estática y lo asigna a MallaMuro.
	MallaMuro = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaMuro"));
	// Asigna la malla como componente raíz del actor.
	// RootComponent = MallaMuro; // (Comentado) Esto haría que MallaMuro sea el componente raíz.
	MallaMuro->SetupAttachment(RootComponent); // En su lugar, lo adjunta al componente raíz.

	// Busca un archivo de malla estática en el contenido del proyecto.
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMallaMuro(
		TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'")
	);

	// Si se encuentra la malla, la asigna al componente MallaMuro.
	if (ObjetoMallaMuro.Succeeded())
	{
		MallaMuro->SetStaticMesh(ObjetoMallaMuro.Object); // Asigna la malla.
		MallaMuro->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f)); // Establece la posición inicial.
	}

	// Inicializa las variables de velocidad y movimiento.
	FloatSpeed = 5.0f; // Velocidad de flotación.
	RotationSpeed = 3.0f; // Velocidad de rotación.
	mPuedeMoverse = FMath::RandBool(); // Decide aleatoriamente si el muro puede moverse.
}

// Llamado cuando el juego comienza o cuando el actor es creado.
void AMuro::BeginPlay()
{
	Super::BeginPlay(); // Llama a la implementación base de BeginPlay().
}

// Llamado en cada fotograma.
void AMuro::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime); // Llama a la implementación base de Tick().

	// Si el muro puede moverse, realiza las actualizaciones de posición y rotación.
	if (mPuedeMoverse)
	{
		// Obtiene la ubicación y rotación actual del actor.
		FVector NewLocation = GetActorLocation();
		FRotator NewRotation = GetActorRotation();
		float RunningTime = GetGameTimeSinceCreation(); // Tiempo transcurrido desde la creación del actor.

		// Calcula un desplazamiento aleatorio en el eje Z.
		float DeltaHeight = FMath::FRandRange(-1.0f, 1.0f) * FloatSpeed;
		NewLocation.Z += DeltaHeight;

		// Calcula una rotación aleatoria en el eje Yaw (eje Z).
		float DeltaRotation = FMath::FRandRange(-1.0f, 1.0f) * RotationSpeed;
		NewRotation.Yaw += DeltaRotation;

		// Aplica la nueva ubicación y rotación al actor.
		SetActorLocationAndRotation(NewLocation, NewRotation);
	}
}