from fpdf import FPDF

# Create a PDF document
pdf = FPDF()
pdf.set_auto_page_break(auto=True, margin=15)
pdf.add_page()

# Title
pdf.set_font("Arial", 'B', 16)
pdf.cell(0, 10, 'Important Theory Questions and Answers for DC Circuits', ln=True, align='C')

# Line break
pdf.ln(10)

# Set font for content
pdf.set_font("Arial", size=12)

# Questions and Answers
qa_pairs = [
    ("1. Explain Ohm’s Law.",
     "Ohm's Law states that the current (I) passing through a conductor "
     "between two points is directly proportional to the voltage (V) across "
     "the two points and inversely proportional to the resistance (R) of the conductor.\n"
     "V = I * R\n"
     "Where:\n"
     "- V = Voltage (volts)\n"
     "- I = Current (amperes)\n"
     "- R = Resistance (ohms)"),

    ("2. State and explain Kirchhoff’s Current Law (KCL).",
     "KCL states that the total current entering a junction is equal to the total current "
     "leaving the junction. This is based on the conservation of charge.\n"
     "Σ I_in = Σ I_out\n"
     "It means that the algebraic sum of currents at any node or junction is zero."),

    ("3. State and explain Kirchhoff’s Voltage Law (KVL).",
     "KVL states that the sum of all voltages around any closed loop in a circuit is equal to zero. "
     "This is based on the conservation of energy.\n"
     "Σ V = 0\n"
     "It means that the algebraic sum of the electromotive forces (EMF) and voltage drops in a closed circuit is zero."),

    ("4. What is a series circuit?",
     "In a series circuit, the same current flows through all the components, and the total resistance "
     "is the sum of individual resistances. The total voltage is divided across the components.\n"
     "R_total = R1 + R2 + R3 + ..."),

    ("5. What is a parallel circuit?",
     "In a parallel circuit, the voltage across each component is the same, and the total current is the "
     "sum of currents through each component. The total resistance decreases as more resistors are added.\n"
     "1/R_total = 1/R1 + 1/R2 + 1/R3 + ..."),

    ("6. Explain the Superposition Theorem.",
     "The Superposition Theorem states that in a linear circuit with multiple independent sources, "
     "the current or voltage for any element in the circuit is the algebraic sum of the currents or voltages "
     "produced by each source acting independently. All other sources are replaced by their internal resistances."),

    ("7. What is Thevenin’s Theorem?",
     "Thevenin's Theorem states that any linear bilateral network with multiple sources and resistors can "
     "be reduced to a single voltage source and a series resistance. The equivalent circuit consists of:\n"
     "- Thevenin equivalent voltage: Open circuit voltage at the terminals.\n"
     "- Thevenin equivalent resistance: The resistance seen by the load when all independent sources are turned off."),

    ("8. What is Norton’s Theorem?",
     "Norton's Theorem is similar to Thevenin’s Theorem. It states that any two-terminal linear network can "
     "be reduced to an equivalent circuit consisting of a single current source in parallel with a resistor."),

    ("9. Explain the Maximum Power Transfer Theorem.",
     "The Maximum Power Transfer Theorem states that a load will receive maximum power from a network "
     "when the load resistance is equal to the Thevenin equivalent resistance of the network supplying the power.\n"
     "R_L = R_Thevenin"),

    ("10. What is Mesh Analysis?",
     "Mesh Analysis is a method used to solve circuit networks by writing KVL equations for each independent "
     "loop (mesh) in the circuit. It simplifies the calculation of current in planar circuits."),

    ("11. What is Nodal Analysis?",
     "Nodal Analysis is a method for determining the voltage at various points (nodes) in an electrical circuit. "
     "It involves applying KCL at each node, where unknown voltages are calculated based on the known currents and resistances."),

    ("12. Explain the concept of capacitors in DC circuits.",
     "In DC circuits, a capacitor initially allows current to flow as it charges, but once fully charged, "
     "it behaves like an open circuit. The voltage across the capacitor increases until it equals the supply voltage."),

    ("13. Explain the concept of inductors in DC circuits.",
     "In DC circuits, an inductor initially resists changes in current due to its property of inductance. "
     "However, after some time (steady-state), the inductor acts as a short circuit with no voltage drop across it, "
     "allowing full current to flow."),

    ("14. What is Star-Delta Transformation?",
     "Star-Delta (or Y-Δ) transformation is a mathematical technique used to simplify the analysis of "
     "three-terminal networks by converting a star (Y) configuration into a delta (Δ) configuration and vice versa."),

    ("15. Derive the equation for energy stored in a capacitor.",
     "The energy (W) stored in a capacitor is given by:\n"
     "W = 1/2 * C * V^2\n"
     "Where:\n"
     "- C = Capacitance (farads)\n"
     "- V = Voltage across the capacitor (volts)"),
]

# Add each question and answer to the PDF
for question, answer in qa_pairs:
    pdf.set_font("Arial", 'B', 12)
    pdf.multi_cell(0, 10, question)
    pdf.set_font("Arial", size=12)
    pdf.multi_cell(0, 10, answer)
    pdf.ln(5)  # Add a line break

# Save the PDF to a file
pdf_file_path = "/mnt/data/DC_Circuits_Theory_Questions.pdf"
pdf.output(pdf_file_path)

pdf_file_path