# Green Efficiency Analysis

## Measurement Methodology
Pour évaluer le temps d’exécution, j’ai utilisé la bibliothèque C standard time.h et sa fonction clock(). La mesure a été réalisée de deux façons.

Pour le premier exercice, j’ai lancé chaque programme trois fois depuis le terminal, puis calculé la moyenne. Répéter les essais permet de limiter l’influence des tâches qui s’exécutent en arrière-plan.

Pour instrumentation_lab.c, j’ai ajouté des appels à clock() juste avant et après les fonctions build_dataset(), process_dataset() et reduce_checksum().

## Observed Performance Differences
Les mesures mettent en évidence un écart important entre les deux approches. La version naïve s’exécute en moyenne en 0.930369 seconde, tandis que la version à passage unique ne prend que 0.000033 seconde. Selon ces résultats, la première est environ ~28481 fois plus lente que la seconde.

Cette différence s’explique par la structure des algorithmes :
- La méthode naïve utilise deux boucles imbriquées. 
- La méthode à passage unique parcourt les 50 000 valeurs une seule fois.

## Relation Between Runtime and Energy Consumption
Le temps d’exécution peut avoir un effet sur l’énergie consommée : pendant qu’un programme effectue ses calculs, le processeur reste actif et utilise de l’électricité.
Améliorer les algorithmes permet de créer des logiciels plus rapides et moins lourd, quand ils sont sur des milliers de serveurs.

## Limitations of the Experiment
La fonction clock() mesure le temps de traitement du programme, mais elle ne mesure pas directement l’électricité consommée.

## Practical Engineering Takeaway
Cette comparaison montre que l’efficacité d’un programme dépend beaucoup de l'algorithme utilisé. La méthode naïve est a évité. 

## My tests
### Run 1

- Naive algorithm time: 0.922233 seconds
- Single-pass algorithm time: 0.000034 seconds

### Run 2

- Naive algorithm time: 0.930431 seconds
- Single-pass algorithm time: 0.000032 seconds

### Run 3

- Naive algorithm time: 0.938444 seconds
- Single-pass algorithm time: 0.000032 seconds

### Averages

Naive Average 0.930369 seconds

Single-pass Average 0.000033 seconds

Naive is ~28481 times slower than Single-pass.
