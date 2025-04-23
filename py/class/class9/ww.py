import wordcloud

txt = """
"Chronological distribution of the tiger Panthera tigris and the Asiatic lion Panthera leo persica in their common range in Asia".
"Lolcat" is a compound word of the acronymic abbreviation for "laugh out loud" (LOL) and the word "cat".
"Pee Wee" Kirkland who was drafted by the Chicago Bulls, but turned it down because he was making way more money in the drug world.
"The typewriter was a useful machine during the censorship era of the Soviet government, starting during the Russian Civil War (1917-1922).
), written by Malling-Hansen's daughter, Johanne Agerskov, in 1865, Malling-Hansen made a porcelain model of the keyboard of his writing ball and experimented with different placements of the letters to achieve the fastest writing speed.
107 Bachelor's degrees are offered across the Haas School of Business (1), College of Chemistry (5), College of Engineering (20), College of Environmental Design (4), College of Letters and Science (67), College of Natural Resources (10), and other individual majors (2).
15 minutes are allowed for a half-time break under FIBA, NBA, and NCAA rules and 10 minutes in United States high schools.
2 In total, Lucas was inducted into the Hall of Fame twice - as player and as a member of the 1960 Olympic team."
"""
t = wordcloud.WordCloud(
    font_path=
    "C:/Users/Qiumix/AppData/Local/Microsoft/Windows/Fonts/JinzisheTongfang-Regular.ttf"
).generate(txt)
t.to_file("hlm.png")
