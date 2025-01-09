def auskunft(linie, start, ziel):
    # Datei einlesen
    with open('fahrzeiten.txt', 'r') as file:
        daten = file.readlines()

    # Relevante Verbindungen für die Linie extrahieren
    verbindungen = []
    for zeile in daten:
        linienname, haltestelle_von, haltestelle_nach, zeit = zeile.strip().split(';')
        if linienname == linie:
            verbindungen.append((haltestelle_von, haltestelle_nach, int(zeit)))

    # Fahrplan in Form eines Dictionaries erstellen
    fahrplan = {start: ziel for start, ziel, _ in verbindungen}
    zeiten = {start: zeit for start, _, zeit in verbindungen}

    # Route und Gesamtfahrzeit berechnen
    route = [start]
    gesamtzeit = 0
    aktuelle_haltestelle = start

    while aktuelle_haltestelle != ziel:
        naechste_haltestelle = fahrplan[aktuelle_haltestelle]
        gesamtzeit += zeiten[aktuelle_haltestelle]
        route.append(naechste_haltestelle)
        aktuelle_haltestelle = naechste_haltestelle

    return gesamtzeit, route


minuten, weg = auskunft("S9", "Kelsterbach", "Niederrad")
print(minuten, "Minuten so:", weg)
