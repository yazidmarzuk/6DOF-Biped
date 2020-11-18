# Battery Management Systems

## **1.1.1**

**BMS INTRO**

* A BMS comprises purpose-built electronics plus custom designed algorithms \(computer methods\): it is an embedded system
* The primary functions of a BMS are to:
  *  Protect human safety of device’s operator: Detect unsafe operating conditions and respond 
  *  ****Protect cells of battery from damage in abuse/failure cases
  *  Prolong life of battery \(normal operating cases\) 
  *  Maintain battery in a state in which it can fulfill its functional design requirements 
  *  Inform the application controller how to make the best use of the pack right now \(e.g., by providing power limits\), control charger, etc

**CELLS AND BATTERIES**

* Cells are the smallest individual electrochemical unit, and deliver a voltage that depends on the cell chemistry
* There are primary \(single use\) and secondary \(rechargeable\) cells
* Batteries and battery packs are made up from groups of cells
* These cells can be wired together in series, in parallel, or in some combination of both

**NOMINAL VOLTAGE AND CAPACITY**

* Cell \(nominal\) voltage depends on the combination of active chemicals used in the cell.
* Cell \(nominal\) capacity specifies the quantity of charge, in ampere hours \(Ah\) or milliampere hours \(mAh\), that the cell is rated to hold

#### C **RATE**

* The C rate is a relative measure of cell electrical current
* It is the constant-current charge or discharge rate that the cell can sustain for one hour
  * A 20 Ah cell should be able to deliver 20 A \(“1C”\) for 1 h or 2 A \(“C/10”\) for about 10 h \(but, the relationship is not strictly linear\)

#### ENERGY AND POWER

* A cell stores energy in electrochemical form, which it can later release to do work 
  * The total energy storage capacity of a cell is roughly its nominal voltage multiplied by its nominal capacity \(mWh, Wh, or kWh\)
* The energy release rate is the cell’s instantaneous power

#### Electrochemical Cells

* COMPONENTS:
  * Negative electrode \(usually lead metal or paste for PbA\) :
    * During discharge it is anode, it gives up electrons to external circuit, is oxidized \(OIL: “Oxidation is Loss \(of electrons\)”\) 
    * During charge its cathode, accepts electrons from external circuit, is reduced \(RIG: “Reduction is Gain \(of electrons\)”\)
  * Positive electrode \(usually a metallic oxide, sulfide, or oxygen\):
    * During discharge\(Cathode\), accepts electrons from circuit, is reduced 
    * During charge\(Anode\), gives up electrons to external circuit, is oxidized
  * Electrolyte :
    * The electrolyte provides the medium for internal ion charge transfer between the electrodes \(sulfuric acid for PbA\)
    * The electrolyte is typically a solvent containing dissolved chemicals—an acid, base, or salt—providing ionic conductivity 
    * It must be an electronic insulator to avoid self discharge
  * Seperators: 
    * The separator electrically isolates the positive and negative electrodes to avoid short circuit and self discharge of the cell
    * Made of glass mat or fiber, or polyethylene, or a polymer
  * Current collectors
    *  current collectors are metal foil, to which electrodes are adhered, that conduct electrical current to cell terminals

#### Storing and releasing energy

* Electrochemical cells instead store electrochemical potential energy, which they can later release to do work

Discharging:

* Electrochemical potential energy at negative electrode favors a chemical process that releases electrons into external circuit and cations into electrolyte
* Electrochemical potential at positive electrode favors a chemical process that accepts both electrons from external circuit and cations from electrolyte
* Resulting electrical pressure \(potential difference\) between terminals is cell voltage
* Work is performed when external circuit is completed, converting stored electrochemical potential energy into electrical energy







