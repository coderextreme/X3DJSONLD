###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

newModel=X3D(profile='Immersive',version='3.2',
  head=head(
    children=[
    meta(content='*enter FileNameWithNoAbbreviations.x3d here*',name='title'),
    meta(content='*enter description here, short-sentence summaries preferred*',name='description'),
    meta(content='*enter name of original author here*',name='creator'),
    meta(content='*if manually translating VRML-to-X3D, enter name of person translating here*',name='translator'),
    meta(content='*enter date of initial version here*',name='created'),
    meta(content='*enter date of translation here*',name='translated'),
    meta(content='*enter date of latest revision here*',name='modified'),
    meta(content='*enter version here, if any*',name='version'),
    meta(content='*enter reference citation or relative/online url here*',name='reference'),
    meta(content='*enter additional url/bibliographic reference information here*',name='reference'),
    meta(content='*enter reference resource here if required to support function, delivery, or coherence of content*',name='requires'),
    meta(content='*enter copyright information here* Example: Copyright (c) Web3D Consortium Inc. 2008',name='rights'),
    meta(content='*enter drawing filename/url here*',name='drawing'),
    meta(content='*enter image filename/url here*',name='Image'),
    meta(content='*enter movie filename/url here*',name='MovingImage'),
    meta(content='*enter photo filename/url here*',name='photo'),
    meta(content='*enter subject keywords here*',name='subject'),
    meta(content='*enter permission statements or url here*',name='accessRights'),
    meta(content='*insert any known warnings, bugs or errors here*',name='warning'),
    meta(content='*enter online Uniform Resource Identifier (URI) or Uniform Resource Locator (URL) address for this file here*',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  Enter any text between the end tags 

<Viewpoint position='-1.5 7 -1.2'/>

 
    children=[
    NavigationInfo(type=['examine'],avatarSize=[0.01,1.6,0.75]),
    #  Enter any text between the end tags 
       <Transform DEF="Mappa" translation=' 3.3 -2.1 -23.5' scale="0.438 0 0.438">
        <Shape>
          <Box size='68.5 0.1 121.1'/>
          <Appearance>
          <ImageTexture url='Immagine22.png'/>
       
        </Appearance>
        </Shape>
      </Transform>
      
      
    #  Enter any text between the end tags
     <Transform scale='0.4 0.4 0.4' translation='4 -0.5 -1.9'>
        <Shape>
          <IndexedFaceSet convex='false' coordIndex='0 1 4 -1 3 4 0 -1 3 4 2 -1 2 4 1 -1 0 1 2 3 -1' solid='false'>
            <Coordinate point='0 0 0 0 0 0.25 0.25 0 0.25 0.25 0 0 0.125 0.42 0.125'/>
          </IndexedFaceSet>
          <Appearance>
            <ImageTexture url='blu2.jpg'/>
            <TextureTransform scale='5 5'/>
          </Appearance>
        </Shape>
      
    </Transform> 
    Transform(DEF='Transform',
      children=[
      Transform(DEF='Base',translation=(5.7,-2.18,-23.5),scale=(0.438,1,0.438),
        children=[
        Shape(
          geometry=Box(size=(68.5,0.1,121.1)),
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.75,0.25))))]),
      Transform(DEF='_______TOWERBIG________',translation=(0.36,0,0),
        #  TOWER1 
        children=[
        Transform(DEF='TOWER1',
          # TODO add children nodes here
          ),
        #  Enter any text between the end tags
    
    <Transform DEF="MuroFrontSotto" translation='0 0 0'>
        <Shape>
          <Box size='7.3 4.27 1.34'/>
          <Appearance>
            <Material diffuseColor='1 0.75 0.25'/>
          </Appearance>
        </Shape>
      </Transform>
      
      
        Transform(DEF='MuroLatSotto',translation=(-2.98,1.08,-2.165),
          children=[
          Shape(
            geometry=Box(size=(1.34,6.71,2.99)),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='TR1',translation=(-0.36,0,0),
          children=[
          Transform(DEF='Scale1',translation=(3.43,-2.135,-0.67),rotation=(0,1,0,1.57),
            children=[
            Shape(DEF='scal',
              geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,-1,2,3,4,5,-1],solid=False,
                coord=Coordinate(point=[(0,0,0),(1.45,0,0),(1.45,0.26,0),(0,0.26,0),(0,0.26,-0.35),(1.45,0.26,-0.35)])),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.75,0.25)))),
            Transform(translation=(0,0.26,-0.35),
              children=[
              Shape(USE='scal')]),
            Transform(translation=(0,0.52,-0.70),
              children=[
              Shape(USE='scal')]),
            Transform(translation=(0,0.78,-1.05),
              children=[
              Shape(USE='scal')]),
            Transform(translation=(0,1.04,-1.40),
              children=[
              Shape(USE='scal')]),
            Transform(translation=(0,1.3,-1.75),
              children=[
              Shape(USE='scal')]),
            Transform(translation=(0,1.56,-2.1),
              children=[
              Shape(USE='scal')]),
            Transform(translation=(0,1.82,-2.45),
              children=[
              Shape(USE='scal')]),
            Transform(translation=(0,2.08,-2.8),
              children=[
              Shape(USE='scal')]),
            Transform(translation=(0,2.34,-3.15),
              children=[
              Shape(USE='scal')]),
            Transform(translation=(0,2.6,-3.5),
              children=[
              Shape(USE='scal')])]),
          Transform(DEF='Strozzatura1',translation=(0.19,-2.05,-2.3),
            children=[
            Shape(
              geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,3,0,4,7,-1,0,1,2,3,-1,4,5,6,7,-1,5,8,9,6,-1],solid=False,
                coord=Coordinate(point=[(0,4.5,0.4),(2,3.9,0.1),(2,3.9,1.11),(0,4.5,1.41),(0,6.4,0.4),(2,6.4,0.1),(2,6.4,1.11),(0,6.4,1.41),(2,7.85,0.1),(2,7.85,1.11)])),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.75,0.25))))]),
          Transform(DEF='Strozzatura11',translation=(0.19,-2.05,-2.1),
            children=[
            Shape(
              geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,3,0,4,7,-1,0,1,2,3,-1,4,5,6,7,-1],solid=False,
                coord=Coordinate(point=[(0,0,0.2),(2,0,-0.1),(2,0,0.41),(0,0,0.71),(0,6.4,0.2),(2,6.4,-0.1),(2,6.4,0.41),(0,6.4,0.71)])),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.75,0.25))))]),
          Transform(DEF='Strozzatura4',translation=(0.19,4.35,-1.6),
            children=[
            Shape(
              geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,3,0,4,7,-1,0,1,2,3,-1,4,5,6,7,-1],solid=False,
                coord=Coordinate(point=[(0,0,0.35),(2,0,0.35),(2,0,0.41),(0,0,0.71),(0,1.6,0.67),(2,1.6,0),(2,1.6,0.41),(0,1.6,0.71)])),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.75,0.25))))]),
          Transform(DEF='Strozzatura2',translation=(0.19,-2,-3.739),
            children=[
            Shape(
              geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,3,0,4,7,-1,0,1,2,3,-1,4,5,6,7,-1],solid=False,
                coord=Coordinate(point=[(0,0,0.2),(2,0,0.2),(2,0,0.81),(0,0,1.11),(0,7.6,0.2),(2,7.6,0.2),(2,7.6,0.81),(0,7.6,1.11)])),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.75,0.25))))]),
          Transform(DEF='Pavimento1',translation=(-1.4,0.675,-1),
            children=[
            Shape(
              geometry=Box(size=(2.2,0.1,2.5)),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.75,0.25))))]),
          Transform(DEF='Scalino',translation=(-1.2,0.825,-2.451),
            children=[
            Shape(
              geometry=Box(size=(3,0.6,1.6)),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.75,0.25))))]),
          Transform(DEF='Scale2',translation=(-1.311,1.125,-3.0995),rotation=(0,1,0,-1.57),
            children=[
            Shape(DEF='scal2',
              geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,-1,2,3,4,5,-1,0,3,4,-1,1,2,7,6,-1],solid=False,
                coord=Coordinate(point=[(0,0,0),(1.45,0,0),(1.45,0.285,0),(0,0.285,0),(0,0.285,-0.5),(1.45,0.285,-0.5),(1.45,0,-1.5),(1.45,0.285,-1.5)])),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.75,0.25)))),
            Transform(translation=(0,0.285,-0.5),
              children=[
              Shape(USE='scal2')]),
            Transform(translation=(0,0.57,-1),
              children=[
              Shape(USE='scal2')]),
            Transform(translation=(0,0.855,-1.5),
              children=[
              Shape(DEF='scalino',
                geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,-1,2,3,4,5,-1,0,3,4,-1,1,2,7,6,-1],solid=False,
                  coord=Coordinate(point=[(0,0,0),(1.45,0,0),(1.45,0.24,0),(0,0.24,0),(0,0.24,-0.5),(1.45,0.24,-0.5),(1.45,0,-1.5),(1.45,0.24,-1.5)])),
                appearance=Appearance(
                  material=Material(diffuseColor=(1,0.75,0.25))))])]),
          Transform(DEF='Pavimento2',translation=(1.4,2.17,-2.44),
            children=[
            Shape(
              geometry=Box(size=(2.2,0.1,1)),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.75,0.25))))])]),
        Transform(DEF='MuroDietro1',translation=(-1.67,1.08,-2.77),
          children=[
          Shape(
            geometry=Box(size=(3,6.43,0.3)),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='MuroDietro2',translation=(-0.95,1.08,-3.61),
          children=[
          Shape(
            geometry=Box(size=(5.4,6.71,0.3)),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='Finestra',translation=(-4.187,-0.358,-0.83),rotation=(0,1,0,1.57),
          children=[
          Transform(DEF='finestra1',
            children=[
            Transform(translation=(-1.5,2.49,3),rotation=(1,0,0,-1.57),
              children=[
              Shape(
                geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,3,0,4,7,-1],solid=False,
                  coord=Coordinate(point=[(0,0,0),(1.34,0,0),(0.9,0,0.182),(0.44,0,0.182),(0,0.858,0),(1.34,0.858,0),(0.9,0.858,0.182),(0.44,0.858,0.182)])),
                appearance=Appearance(
                  material=Material(diffuseColor=(1,0.75,0.25))))])]),
          Transform(DEF='finestra2',
            children=[
            Transform(translation=(-1.5,3.465,3),rotation=(1,0,0,-1.57),
              children=[
              Shape(
                geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,3,0,4,7,-1],solid=False,
                  coord=Coordinate(point=[(0,0,0),(1.34,0,0),(0.9,0,-0.182),(0.44,0,-0.182),(0,0.858,0),(1.34,0.858,0),(0.9,0.858,-0.182),(0.44,0.858,-0.182)])),
                appearance=Appearance(
                  material=Material(diffuseColor=(1,0.75,0.25))))])]),
          Transform(DEF='finestra11',translation=(-1.5,2.495,3.145),
            children=[
            Transform(translation=(0,0,-1.01),rotation=(1,0,0,0),
              children=[
              Shape(
                geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,3,0,4,7,-1],solid=False,
                  coord=Coordinate(point=[(0,0,0),(1.34,0,0),(0.9,0,0.182),(0.44,0,0.182),(0,0.963,0),(1.34,0.963,0),(0.9,0.963,0.182),(0.44,0.963,0.182)])),
                appearance=Appearance(
                  material=Material(diffuseColor=(1,0.75,0.25))))])]),
          Transform(DEF='finestra21',translation=(-1.5,2.495,3.145),
            children=[
            Transform(translation=(0,0,-0.15),rotation=(1,0,0,0),
              children=[
              Shape(
                geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,3,0,4,7,-1],solid=False,
                  coord=Coordinate(point=[(0,0,0),(1.34,0,0),(0.9,0,-0.182),(0.44,0,-0.182),(0,0.963,0),(1.34,0.963,0),(0.9,0.963,-0.182),(0.44,0.963,-0.182)])),
                appearance=Appearance(
                  material=Material(diffuseColor=(1,0.75,0.25))))])])]),
        Transform(DEF='TR2',translation=(-0.36,0,0),
          children=[
          Transform(DEF='Arco1',translation=(2.19,0.33,-1.18),rotation=(0,1,0,1.57),scale=(0.85,1,0.3845),
            children=[
            Transform(translation=(0,0.7,0),
              children=[
              Shape(
                geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,84,85,-1,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,86,87,-1,1,43,44,2,-1,2,44,45,3,-1,3,45,46,4,-1,4,46,47,5,-1,5,47,48,6,-1,6,48,49,7,-1,7,49,50,8,-1,8,50,51,9,-1,9,51,52,10,-1,10,52,53,11,-1,11,53,54,12,-1,12,54,55,13,-1,13,55,56,14,-1,14,56,57,15,-1,15,57,58,16,-1,16,58,59,17,-1,17,59,60,18,-1,18,60,61,19,-1,19,61,62,20,-1,20,62,63,21,-1,21,63,64,22,-1,22,64,65,23,-1,23,65,66,24,-1,24,66,67,25,-1,25,67,68,26,-1,26,68,69,27,-1,27,69,70,28,-1,28,70,71,29,-1,29,71,72,30,-1,30,72,73,31,-1,31,73,74,32,-1,32,74,75,33,-1,33,75,76,34,-1,34,76,77,35,-1,35,77,78,36,-1,36,78,79,37,-1,37,79,80,38,-1,38,80,81,39,-1,39,81,82,40,-1,40,82,83,41,-1],solid=False,
                  coord=Coordinate(point=[(0.62265,0.0,0),(0.6218712004456791,0.0311325,0),(0.6195289277144369,0.062265,0),(0.6156053358230011,0.0933975,0),(0.6100699153375784,0.12453,0),(0.6028782701290121,0.1556625,0),(0.5939702437622613,0.186795,0),(0.5832672005554145,0.2179275,0),(0.5706681512928509,0.24906,0),(0.5560442297549271,0.2801925,0),(0.5392307176663808,0.311325,0),(0.520015272077417,0.3424575,0),(0.49812000000000006,0.37359,0),(0.47317303441103875,0.4047225,0),(0.4446610411032206,0.435855,0),(0.4118442634585919,0.4669875,0),(0.37359000000000003,0.49812,0),(0.3280012404606879,0.5292525,0),(0.2714068427195601,0.560385,0),(0.19442240018513812,0.5915175,0),(0.0,0.62265,0),(-0.0,0.62265,0),(-0.19442240018513812,0.5915175,0),(-0.2714068427195601,0.560385,0),(-0.3280012404606879,0.5292525,0),(-0.37359000000000003,0.49812,0),(-0.4118442634585919,0.4669875,0),(-0.4446610411032206,0.435855,0),(-0.47317303441103875,0.4047225,0),(-0.49812000000000006,0.37359,0),(-0.520015272077417,0.3424575,0),(-0.5392307176663808,0.311325,0),(-0.5560442297549271,0.2801925,0),(-0.5706681512928509,0.24906,0),(-0.5832672005554145,0.2179275,0),(-0.5939702437622613,0.186795,0),(-0.6028782701290121,0.1556625,0),(-0.6100699153375784,0.12453,0),(-0.6156053358230011,0.0933975,0),(-0.6195289277144369,0.062265,0),(-0.6218712004456791,0.0311325,0),(-0.62265,0.0,0),(0.62265,0.7359,-5.2),(0.6218712004456791,0.7670325,-5.2),(0.6195289277144369,0.798165,-5.2),(0.6156053358230011,0.8292975,-5.2),(0.6100699153375784,0.86043,-5.2),(0.6028782701290121,0.8915625,-5.2),(0.5939702437622613,0.922695,-5.2),(0.5832672005554145,0.9538275,-5.2),(0.5706681512928509,0.98496,-5.2),(0.5560442297549271,1.0160925,-5.2),(0.5392307176663808,1.047225,-5.2),(0.520015272077417,1.0783575,-5.2),(0.49812000000000006,1.10949,-5.2),(0.47317303441103875,1.1406225,-5.2),(0.4446610411032206,1.171755,-5.2),(0.4118442634585919,1.2028875,-5.2),(0.37359000000000003,1.23402,-5.2),(0.3280012404606879,1.2651525,-5.2),(0.2714068427195601,1.296285,-5.2),(0.19442240018513812,1.3274175,-5.2),(0.0,1.35855,-5.2),(-0.0,1.35855,-5.2),(-0.19442240018513812,1.3274175,-5.2),(-0.2714068427195601,1.296285,-5.2),(-0.3280012404606879,1.2651525,-5.2),(-0.37359000000000003,1.23402,-5.2),(-0.4118442634585919,1.2028875,-5.2),(-0.4446610411032206,1.171755,-5.2),(-0.47317303441103875,1.1406225,-5.2),(-0.49812000000000006,1.10949,-5.2),(-0.520015272077417,1.0783575,-5.2),(-0.5392307176663808,1.047225,-5.2),(-0.5560442297549271,1.0160925,-5.2),(-0.5706681512928509,0.98496,-5.2),(-0.5832672005554145,0.9538275,-5.2),(-0.5939702437622613,0.922695,-5.2),(-0.6028782701290121,0.8915625,-5.2),(-0.6100699153375784,0.86043,-5.2),(-0.6156053358230011,0.8292975,-5.2),(-0.6195289277144369,0.798165,-5.2),(-0.6218712004456791,0.7670325,-5.2),(-0.62265,0.7359,-5.2),(-0.62265,1,0),(0.62265,1,0),(-0.62265,2.98,-5.2),(0.62265,2.98,-5.2)])),
                appearance=Appearance(
                  material=Material(diffuseColor=(1,0.75,0.25))))])]),
          Transform(DEF='Arco2',translation=(0.137,3.6,-2.25),rotation=(0,1,0,1.72),scale=(0.57,1,1),
            children=[
            Shape(
              geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,84,85,86,87,88,89,-1,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,90,91,92,93,94,95,-1,0,42,43,1,-1,1,43,44,2,-1,2,44,45,3,-1,3,45,46,4,-1,4,46,47,5,-1,5,47,48,6,-1,6,48,49,7,-1,7,49,50,8,-1,8,50,51,9,-1,9,51,52,10,-1,10,52,53,11,-1,11,53,54,12,-1,12,54,55,13,-1,13,55,56,14,-1,14,56,57,15,-1,15,57,58,16,-1,16,58,59,17,-1,17,59,60,18,-1,18,60,61,19,-1,19,61,62,20,-1,20,62,63,21,-1,21,63,64,22,-1,22,64,65,23,-1,23,65,66,24,-1,24,66,67,25,-1,25,67,68,26,-1,26,68,69,27,-1,27,69,70,28,-1,28,70,71,29,-1,29,71,72,30,-1,30,72,73,31,-1,31,73,74,32,-1,32,74,75,33,-1,33,75,76,34,-1,34,76,77,35,-1,35,77,78,36,-1,36,78,79,37,-1,37,79,80,38,-1,38,80,81,39,-1,39,81,82,40,-1,40,82,83,41,-1,84,41,83,90,-1,89,0,42,95,-1],solid=False,
                coord=Coordinate(point=[(0.62265,0.0,0),(0.6218712004456791,0.0311325,0),(0.6195289277144369,0.062265,0),(0.6156053358230011,0.0933975,0),(0.6100699153375784,0.12453,0),(0.6028782701290121,0.1556625,0),(0.5939702437622613,0.186795,0),(0.5832672005554145,0.2179275,0),(0.5706681512928509,0.24906,0),(0.5560442297549271,0.2801925,0),(0.5392307176663808,0.311325,0),(0.520015272077417,0.3424575,0),(0.49812000000000006,0.37359,0),(0.47317303441103875,0.4047225,0),(0.4446610411032206,0.435855,0),(0.4118442634585919,0.4669875,0),(0.37359000000000003,0.49812,0),(0.3280012404606879,0.5292525,0),(0.2714068427195601,0.560385,0),(0.19442240018513812,0.5915175,0),(0.0,0.62265,0),(-0.0,0.62265,0),(-0.19442240018513812,0.5915175,0),(-0.2714068427195601,0.560385,0),(-0.3280012404606879,0.5292525,0),(-0.37359000000000003,0.49812,0),(-0.4118442634585919,0.4669875,0),(-0.4446610411032206,0.435855,0),(-0.47317303441103875,0.4047225,0),(-0.49812000000000006,0.37359,0),(-0.520015272077417,0.3424575,0),(-0.5392307176663808,0.311325,0),(-0.5560442297549271,0.2801925,0),(-0.5706681512928509,0.24906,0),(-0.5832672005554145,0.2179275,0),(-0.5939702437622613,0.186795,0),(-0.6028782701290121,0.1556625,0),(-0.6100699153375784,0.12453,0),(-0.6156053358230011,0.0933975,0),(-0.6195289277144369,0.062265,0),(-0.6218712004456791,0.0311325,0),(-0.62265,0.0,0),(0.62265,0.0,1.8),(0.6218712004456791,0.0311325,1.8),(0.6195289277144369,0.062265,1.8),(0.6156053358230011,0.0933975,1.8),(0.6100699153375784,0.12453,1.8),(0.6028782701290121,0.1556625,1.8),(0.5939702437622613,0.186795,1.8),(0.5832672005554145,0.2179275,1.8),(0.5706681512928509,0.24906,1.8),(0.5560442297549271,0.2801925,1.8),(0.5392307176663808,0.311325,1.8),(0.520015272077417,0.3424575,1.8),(0.49812000000000006,0.37359,1.8),(0.47317303441103875,0.4047225,1.8),(0.4446610411032206,0.435855,1.8),(0.4118442634585919,0.4669875,1.8),(0.37359000000000003,0.49812,1.8),(0.3280012404606879,0.5292525,1.8),(0.2714068427195601,0.560385,1.8),(0.19442240018513812,0.5915175,1.8),(0.0,0.62265,1.8),(-0.0,0.62265,1.8),(-0.19442240018513812,0.5915175,1.8),(-0.2714068427195601,0.560385,1.8),(-0.3280012404606879,0.5292525,1.8),(-0.37359000000000003,0.49812,1.8),(-0.4118442634585919,0.4669875,1.8),(-0.4446610411032206,0.435855,1.8),(-0.47317303441103875,0.4047225,1.8),(-0.49812000000000006,0.37359,1.8),(-0.520015272077417,0.3424575,1.8),(-0.5392307176663808,0.311325,1.8),(-0.5560442297549271,0.2801925,1.8),(-0.5706681512928509,0.24906,1.8),(-0.5832672005554145,0.2179275,1.8),(-0.5939702437622613,0.186795,1.8),(-0.6028782701290121,0.1556625,1.8),(-0.6100699153375784,0.12453,1.8),(-0.6156053358230011,0.0933975,1.8),(-0.6195289277144369,0.062265,1.8),(-0.6218712004456791,0.0311325,1.8),(-0.62265,0.0,1.8),(-0.62265,-1.70,0),(-0.62265,0,0),(-0.62265,0.7,0),(0.62265,0.7,0),(0.62265,0,0),(0.62265,-1.70,0),(-0.62265,0,1.8),(-0.62265,0,1.8),(-0.62265,0.7,1.8),(0.62265,0.7,1.8),(0.62265,0,1.8),(0.62265,-1.50,1.8)])),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.75,0.25))))]),
          Transform(DEF='Trave1',translation=(2.14,5,-2.565),
            children=[
            Shape(
              geometry=Box(size=(0.1,1.7,0.73)),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.75,0.25))))])]),
        #  Enter any text between the end tags 
       <Transform DEF="Soffitto1" translation='-1.4 4.203 -2'>
        <Shape>
          <Box size='2.6 0.01 2.3'/>
          <Appearance>
            <Material diffuseColor='1 0.75 0.25'/>
          </Appearance>
        </Shape>
      </Transform>
    
    <Transform DEF="Soffitto11" translation='-1.9 4.203 -0.7'>
        <Shape>
          <Box size='2.4 0.01 0.5'/>
          <Appearance>
            <Material diffuseColor='1 0.75 0.25'/>
          </Appearance>
        </Shape>
      </Transform>
    
        #  TOWER2 
        Transform(DEF='TOWER2',
          # TODO add children nodes here
          ),
        Transform(DEF='Pavimento31',translation=(-1.3,4.342,-1.94),rotation=(0,1,0,1.72),
          children=[
          Shape(
            geometry=Box(size=(2.4,0.2,2.7)),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='Pavimento31Sottile',translation=(-0.57,4.292,-0.84),rotation=(0,1,0,1.72),
          children=[
          Shape(
            geometry=Box(size=(0.02,0.3,0.37)),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='Pavimento31Scalino',translation=(-2.05,4.342,-1.2),rotation=(0,1,0,1.72),
          children=[
          Shape(
            geometry=Box(size=(2.4,0.2,2.5)),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='Pavimento31ScalinoSottile',translation=(-0.69,4.292,-0.56),rotation=(0,1,0,1.72),
          children=[
          Shape(
            geometry=Box(size=(0.5,0.3,0.02)),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='Pavimento313',translation=(-2.65,4.342,-2.7),
          children=[
          Shape(
            geometry=Box(size=(0.9,0.2,0.9)),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        #  Enter any text between the end tags 
    
       
       <Transform DEF="Pavimento32" translation='-0.1 4.392 -1.36' rotation="0 1 0 1.72">
        <Shape>
          <Box size='1 0.1 2'/>
          <Appearance>
            <Material diffuseColor='1 0.75 0.25'/>
          </Appearance>
        </Shape>
      </Transform>
        <Transform DEF="Pavimento322" translation='-0.4 4.392 -2.5' rotation="0 1 0 1.72">
        <Shape>
          <Box size='2 0.1 1'/>
          <Appearance>
            <Material diffuseColor='1 0.75 0.25'/>
          </Appearance>
        </Shape>
      </Transform>
      
       <Transform DEF="Pavimento323" translation='-2.7 4.392 -1.7' rotation="0 1 0 0">
        <Shape>
          <Box size='1 0.1 3'/>
          <Appearance>
            <Material diffuseColor='1 0.75 0.25'/>
          </Appearance>
        </Shape>
      </Transform>
      
       <Transform DEF="Pavimento324" translation='-2.2 4.392 -2.9' rotation="0 1 0 0">
        <Shape>
          <Box size='2.5 0.1 1'/>
          <Appearance>
            <Material diffuseColor='1 0.75 0.25'/>
          </Appearance>
        </Shape>
      </Transform>
      
      
      
      
        Transform(DEF='Soffitto2',translation=(-1.57,8.532,-1.55),
          children=[
          Shape(
            geometry=Box(size=(3.09,0.64,3.3)),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        #  Enter any text between the end tags

   
       <Transform DEF="Pavimento322" translation='-0.1 4.392 -3' rotation="0 1 0 1.72">
        <Shape>
          <Box size='1 0.1 1'/>
          <Appearance>
            <Material diffuseColor='1 0.75 0.25'/>
          </Appearance>
        </Shape>
      </Transform>
     
        <Transform DEF="Pavimento33" translation='-0.4 4.392 -0.35' rotation="0 1 0 1.72">
        <Shape>
          <Box size='1 0.1 2'/>
          <Appearance>
            <Material diffuseColor='1 0.75 0.25'/>
          </Appearance>
        </Shape>
      </Transform>
      
      
      
       <Transform DEF="Pavimento34" translation='-2.8 4.392 -1.4' rotation="0 1 0 1.72">
        <Shape>
          <Box size='1.5 0.1 1'/>
          <Appearance>
            <Material diffuseColor='1 0.75 0.25'/>
          </Appearance>
        </Shape>
      </Transform>
          
       
        Transform(DEF='TR3',translation=(-0.36,0,0),
          children=[
          Transform(DEF='Scale3',translation=(2.2,2.25,-0.6),rotation=(0,1,0,1.72),
            children=[
            Transform(
              children=[
              Shape(
                geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,-1,2,3,4,5,-1],solid=False,
                  coord=Coordinate(point=[(0,-0.1,0),(0.6,-0.1,0.08),(0.6,0.254,0.08),(0,0.254,0),(0,0.254,-0.32),(0.6,0.254,-0.32)])),
                appearance=Appearance(
                  material=Material(diffuseColor=(1,0.75,0.25))))]),
            Transform(translation=(0,0.254,-0.32),
              children=[
              Shape(DEF='scal3',
                geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,-1,2,3,4,5,-1],solid=False,
                  coord=Coordinate(point=[(0,0,0),(0.6,0,0),(0.6,0.254,0),(0,0.254,0),(0,0.254,-0.32),(0.6,0.254,-0.32)])),
                appearance=Appearance(
                  material=Material(diffuseColor=(1,0.75,0.25))))]),
            Transform(translation=(0,0.508,-0.64),
              children=[
              Shape(USE='scal3')]),
            Transform(translation=(0,0.762,-0.96),
              children=[
              Shape(USE='scal3')]),
            Transform(translation=(0,1.016,-1.28),
              children=[
              Shape(USE='scal3')]),
            Transform(translation=(0,1.27,-1.6),
              children=[
              Shape(USE='scal3')]),
            Transform(translation=(0,1.524,-1.92),
              geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,-1,2,3,4,5,-1],solid=False,
                coord=Coordinate(point=[(-0.1,0,0.15),(0.8,0,0.15),(0.8,0.254,0.15),(-0.1,0.254,0.15),(-0.1,0.254,-0.2625),(0.8,0.254,-0.2625)]))),
            Transform(translation=(0,1.778,-2.24),
              geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,-1,2,3,4,5,-1],solid=False,
                coord=Coordinate(point=[(-0.1,0,0.15),(0.8,0,0.15),(0.8,0.21,0.15),(-0.1,0.21,0.15),(-0.1,0.21,-0.2625),(0.8,0.21,-0.2625)])))]),
          Transform(DEF='Strozzatura3',translation=(0.19,2,-0.3),
            children=[
            Shape(
              geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,1,2,6,5,-1,5,8,9,6,-1],solid=False,
                coord=Coordinate(point=[(0,0.14,0),(2,0.14,-0.3),(2,0.14,0.41),(0,0.14,0.71),(0,4.2,0),(2,2.8,-0.3),(2,2.8,0.41),(0,4.2,0.71),(2,3.5,-0.3),(2,3.5,0.41)])),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.75,0.25))))]),
          #  Enter any text between the end tags 
         
    <Transform DEF="Strozzatura5" translation='0.38 4.8 -1' rotation="0 1 0 0">
          <Shape >
            <IndexedFaceSet convex='false' coordIndex='0 1 5 4 -1          1 2 6 5 -1       2 3 7 6  -1         3 0 4 7 -1  0 1 2 3 -1   4 5 6 7 -1    ' solid='false'>
              <Coordinate point='0 0 -0.03  2 0 -0.33     2 0 0.38   0 0 0.68           0 2.8 -0.03  2 2.8 -0.33     2 2.8 0.38   0 2.8 0.68                   '/>
            </IndexedFaceSet>
            <Appearance>
              <Material diffuseColor='1 0.725 0.25'/>
            </Appearance>
          </Shape>
    </Transform>
      
          Transform(DEF='Arco3',translation=(2,4.38,-0.875),rotation=(0,1,0,1.72),scale=(0.5,0.4,0.6),
            children=[
            Shape(
              geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,84,85,-1,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,-1,1,43,44,2,-1,2,44,45,3,-1,3,45,46,4,-1,4,46,47,5,-1,5,47,48,6,-1,6,48,49,7,-1,7,49,50,8,-1,8,50,51,9,-1,9,51,52,10,-1,10,52,53,11,-1,11,53,54,12,-1,12,54,55,13,-1,13,55,56,14,-1,14,56,57,15,-1,15,57,58,16,-1,16,58,59,17,-1,17,59,60,18,-1,18,60,61,19,-1,19,61,62,20,-1,20,62,63,21,-1,21,63,64,22,-1,22,64,65,23,-1,23,65,66,24,-1,24,66,67,25,-1,25,67,68,26,-1,26,68,69,27,-1,27,69,70,28,-1,28,70,71,29,-1,29,71,72,30,-1,30,72,73,31,-1,31,73,74,32,-1,32,74,75,33,-1,33,75,76,34,-1,34,76,77,35,-1,35,77,78,36,-1,36,78,79,37,-1,37,79,80,38,-1,38,80,81,39,-1,39,81,82,40,-1,40,82,83,41,-1],solid=False,
                coord=Coordinate(point=[(0.62265,0.0,0),(0.6218712004456791,0.0311325,0),(0.6195289277144369,0.062265,0),(0.6156053358230011,0.0933975,0),(0.6100699153375784,0.12453,0),(0.6028782701290121,0.1556625,0),(0.5939702437622613,0.186795,0),(0.5832672005554145,0.2179275,0),(0.5706681512928509,0.24906,0),(0.5560442297549271,0.2801925,0),(0.5392307176663808,0.311325,0),(0.520015272077417,0.3424575,0),(0.49812000000000006,0.37359,0),(0.47317303441103875,0.4047225,0),(0.4446610411032206,0.435855,0),(0.4118442634585919,0.4669875,0),(0.37359000000000003,0.49812,0),(0.3280012404606879,0.5292525,0),(0.2714068427195601,0.560385,0),(0.19442240018513812,0.5915175,0),(0.0,0.62265,0),(-0.0,0.62265,0),(-0.19442240018513812,0.5915175,0),(-0.2714068427195601,0.560385,0),(-0.3280012404606879,0.5292525,0),(-0.37359000000000003,0.49812,0),(-0.4118442634585919,0.4669875,0),(-0.4446610411032206,0.435855,0),(-0.47317303441103875,0.4047225,0),(-0.49812000000000006,0.37359,0),(-0.520015272077417,0.3424575,0),(-0.5392307176663808,0.311325,0),(-0.5560442297549271,0.2801925,0),(-0.5706681512928509,0.24906,0),(-0.5832672005554145,0.2179275,0),(-0.5939702437622613,0.186795,0),(-0.6028782701290121,0.1556625,0),(-0.6100699153375784,0.12453,0),(-0.6156053358230011,0.0933975,0),(-0.6195289277144369,0.062265,0),(-0.6218712004456791,0.0311325,0),(-0.62265,0.0,0),(0.62265,3.7359,-2.501),(0.6218712004456791,3.7670325,-2.501),(0.6195289277144369,3.798165,-2.501),(0.6156053358230011,3.8292975,-2.501),(0.6100699153375784,3.86043,-2.501),(0.6028782701290121,3.8915625,-2.501),(0.5939702437622613,3.922695,-2.501),(0.5832672005554145,3.9538275,-2.501),(0.5706681512928509,3.98496,-2.501),(0.5560442297549271,4.0160925,-2.501),(0.5392307176663808,4.047225,-2.501),(0.520015272077417,4.0783575,-2.501),(0.49812000000000006,4.10949,-2.501),(0.47317303441103875,4.1406225,-2.501),(0.4446610411032206,4.171755,-2.501),(0.4118442634585919,4.2028875,-2.501),(0.37359000000000003,4.23402,-2.501),(0.3280012404606879,4.2651525,-2.501),(0.2714068427195601,4.296285,-2.501),(0.19442240018513812,4.3274175,-2.501),(0.0,4.35855,-2.501),(-0.0,4.35855,-2.501),(-0.19442240018513812,4.3274175,-2.501),(-0.2714068427195601,4.296285,-2.501),(-0.3280012404606879,4.2651525,-2.501),(-0.37359000000000003,4.23402,-2.501),(-0.4118442634585919,4.2028875,-2.501),(-0.4446610411032206,4.171755,-2.501),(-0.47317303441103875,4.1406225,-2.501),(-0.49812000000000006,4.10949,-2.501),(-0.520015272077417,4.0783575,-2.501),(-0.5392307176663808,4.047225,-2.501),(-0.5560442297549271,4.0160925,-2.501),(-0.5706681512928509,3.98496,-2.501),(-0.5832672005554145,3.9538275,-2.501),(-0.5939702437622613,3.922695,-2.501),(-0.6028782701290121,3.8915625,-2.501),(-0.6100699153375784,3.86043,-2.501),(-0.6156053358230011,3.8292975,-2.501),(-0.6195289277144369,3.798165,-2.501),(-0.6218712004456791,3.7670325,-2.501),(-0.62265,3.7359,-2.501),(-0.62265,4,0),(0.62265,4,0),(-0.62265,4.5,-2.501),(0.62265,4.5,-2.501)])),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.75,0.25))))]),
          Transform(DEF='muro',translation=(0.4,4.9,-0.972),rotation=(0,1,0,1.72),
            children=[
            Shape(
              geometry=Box(size=(0.1,2.1,1.05)),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.75,0.25))))]),
          Transform(DEF='box',translation=(-0.2,3.83,-1.11),
            children=[
            Shape(
              geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,-1,0,4,7,3,-1,0,1,5,4,-1],solid=False,
                coord=Coordinate(point=[(-0.23,-0.1,0),(0.45,-0.1,0),(0.45,0.5,0),(-0.23,0.5,0),(-0.23,-0.1,0.6),(0.45,-0.1,0.6),(0.45,0.5,0.6),(-0.23,0.5,0.6)])),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.75,0.25))))]),
          Transform(DEF='ArcoTrave',translation=(2.1,4.4,-0.88),rotation=(0,1,0,1.57),scale=(0.5,0.7,1),
            children=[
            Shape(
              geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,84,85,86,87,88,89,-1,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,90,91,92,93,94,95,-1,0,42,43,1,-1,1,43,44,2,-1,2,44,45,3,-1,3,45,46,4,-1,4,46,47,5,-1,5,47,48,6,-1,6,48,49,7,-1,7,49,50,8,-1,8,50,51,9,-1,9,51,52,10,-1,10,52,53,11,-1,11,53,54,12,-1,12,54,55,13,-1,13,55,56,14,-1,14,56,57,15,-1,15,57,58,16,-1,16,58,59,17,-1,17,59,60,18,-1,18,60,61,19,-1,19,61,62,20,-1,20,62,63,21,-1,21,63,64,22,-1,22,64,65,23,-1,23,65,66,24,-1,24,66,67,25,-1,25,67,68,26,-1,26,68,69,27,-1,27,69,70,28,-1,28,70,71,29,-1,29,71,72,30,-1,30,72,73,31,-1,31,73,74,32,-1,32,74,75,33,-1,33,75,76,34,-1,34,76,77,35,-1,35,77,78,36,-1,36,78,79,37,-1,37,79,80,38,-1,38,80,81,39,-1,39,81,82,40,-1,40,82,83,41,-1,84,41,83,90,-1,89,0,42,95,-1,0,41,83,42,-1],solid=False,
                coord=Coordinate(point=[(0.62265,0.0,0),(0.6218712004456791,0.0311325,0),(0.6195289277144369,0.062265,0),(0.6156053358230011,0.0933975,0),(0.6100699153375784,0.12453,0),(0.6028782701290121,0.1556625,0),(0.5939702437622613,0.186795,0),(0.5832672005554145,0.2179275,0),(0.5706681512928509,0.24906,0),(0.5560442297549271,0.2801925,0),(0.5392307176663808,0.311325,0),(0.520015272077417,0.3424575,0),(0.49812000000000006,0.37359,0),(0.47317303441103875,0.4047225,0),(0.4446610411032206,0.435855,0),(0.4118442634585919,0.4669875,0),(0.37359000000000003,0.49812,0),(0.3280012404606879,0.5292525,0),(0.2714068427195601,0.560385,0),(0.19442240018513812,0.5915175,0),(0.0,0.62265,0),(-0.0,0.62265,0),(-0.19442240018513812,0.5915175,0),(-0.2714068427195601,0.560385,0),(-0.3280012404606879,0.5292525,0),(-0.37359000000000003,0.49812,0),(-0.4118442634585919,0.4669875,0),(-0.4446610411032206,0.435855,0),(-0.47317303441103875,0.4047225,0),(-0.49812000000000006,0.37359,0),(-0.520015272077417,0.3424575,0),(-0.5392307176663808,0.311325,0),(-0.5560442297549271,0.2801925,0),(-0.5706681512928509,0.24906,0),(-0.5832672005554145,0.2179275,0),(-0.5939702437622613,0.186795,0),(-0.6028782701290121,0.1556625,0),(-0.6100699153375784,0.12453,0),(-0.6156053358230011,0.0933975,0),(-0.6195289277144369,0.062265,0),(-0.6218712004456791,0.0311325,0),(-0.62265,0.0,0),(0.62265,0.0,0.1),(0.6218712004456791,0.0311325,0.1),(0.6195289277144369,0.062265,0.1),(0.6156053358230011,0.0933975,0.1),(0.6100699153375784,0.12453,0.1),(0.6028782701290121,0.1556625,0.1),(0.5939702437622613,0.186795,0.1),(0.5832672005554145,0.2179275,0.1),(0.5706681512928509,0.24906,0.1),(0.5560442297549271,0.2801925,0.1),(0.5392307176663808,0.311325,0.1),(0.520015272077417,0.3424575,0.1),(0.49812000000000006,0.37359,0.1),(0.47317303441103875,0.4047225,0.1),(0.4446610411032206,0.435855,0.1),(0.4118442634585919,0.4669875,0.1),(0.37359000000000003,0.49812,0.1),(0.3280012404606879,0.5292525,0.1),(0.2714068427195601,0.560385,0.1),(0.19442240018513812,0.5915175,0.1),(0.0,0.62265,0.1),(-0.0,0.62265,0.1),(-0.19442240018513812,0.5915175,0.1),(-0.2714068427195601,0.560385,0.1),(-0.3280012404606879,0.5292525,0.1),(-0.37359000000000003,0.49812,0.1),(-0.4118442634585919,0.4669875,0.1),(-0.4446610411032206,0.435855,0.1),(-0.47317303441103875,0.4047225,0.1),(-0.49812000000000006,0.37359,0.1),(-0.520015272077417,0.3424575,0.1),(-0.5392307176663808,0.311325,0.1),(-0.5560442297549271,0.2801925,0.1),(-0.5706681512928509,0.24906,0.1),(-0.5832672005554145,0.2179275,0.1),(-0.5939702437622613,0.186795,0.1),(-0.6028782701290121,0.1556625,0.1),(-0.6100699153375784,0.12453,0.1),(-0.6156053358230011,0.0933975,0.1),(-0.6195289277144369,0.062265,0.1),(-0.6218712004456791,0.0311325,0.1),(-0.62265,0.0,0.1),(-0.62265,0,0),(-0.62265,0,0),(-0.62265,0,0),(0.62265,0,0),(0.62265,0,0),(0.62265,0,0),(-0.62265,0,0.1),(0,0,0.1),(-0.62265,0,0.1),(0.62265,0,0.1),(0.62265,0,0.1),(0.62265,0,0.1)])),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.75,0.25))))]),
          Transform(DEF='Trave2',translation=(2.185,5.3,-0.87),
            children=[
            Shape(
              geometry=Box(size=(0.01,1.8,0.65)),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.75,0.25))))]),
          Transform(DEF='Arco4',translation=(-0.03,5.52,-0.597),rotation=(0,1,0,1.9),scale=(0.6,0.6,1),
            children=[
            Shape(
              geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,84,85,86,87,88,89],solid=False,
                coord=Coordinate(point=[(0.62265,0.0,0),(0.6218712004456791,0.0311325,0),(0.6195289277144369,0.062265,0),(0.6156053358230011,0.0933975,0),(0.6100699153375784,0.12453,0),(0.6028782701290121,0.1556625,0),(0.5939702437622613,0.186795,0),(0.5832672005554145,0.2179275,0),(0.5706681512928509,0.24906,0),(0.5560442297549271,0.2801925,0),(0.5392307176663808,0.311325,0),(0.520015272077417,0.3424575,0),(0.49812000000000006,0.37359,0),(0.47317303441103875,0.4047225,0),(0.4446610411032206,0.435855,0),(0.4118442634585919,0.4669875,0),(0.37359000000000003,0.49812,0),(0.3280012404606879,0.5292525,0),(0.2714068427195601,0.560385,0),(0.19442240018513812,0.5915175,0),(0.0,0.62265,0),(-0.0,0.62265,0),(-0.19442240018513812,0.5915175,0),(-0.2714068427195601,0.560385,0),(-0.3280012404606879,0.5292525,0),(-0.37359000000000003,0.49812,0),(-0.4118442634585919,0.4669875,0),(-0.4446610411032206,0.435855,0),(-0.47317303441103875,0.4047225,0),(-0.49812000000000006,0.37359,0),(-0.520015272077417,0.3424575,0),(-0.5392307176663808,0.311325,0),(-0.5560442297549271,0.2801925,0),(-0.5706681512928509,0.24906,0),(-0.5832672005554145,0.2179275,0),(-0.5939702437622613,0.186795,0),(-0.6028782701290121,0.1556625,0),(-0.6100699153375784,0.12453,0),(-0.6156053358230011,0.0933975,0),(-0.6195289277144369,0.062265,0),(-0.6218712004456791,0.0311325,0),(-0.62265,0.0,0),(0.62265,0.0,0.05),(0.6218712004456791,0.0311325,0.05),(0.6195289277144369,0.062265,0.05),(0.6156053358230011,0.0933975,0.05),(0.6100699153375784,0.12453,0.05),(0.6028782701290121,0.1556625,0.05),(0.5939702437622613,0.186795,0.05),(0.5832672005554145,0.2179275,0.05),(0.5706681512928509,0.24906,0.05),(0.5560442297549271,0.2801925,0.05),(0.5392307176663808,0.311325,0.05),(0.520015272077417,0.3424575,0.05),(0.49812000000000006,0.37359,0.05),(0.47317303441103875,0.4047225,0.05),(0.4446610411032206,0.435855,0.05),(0.4118442634585919,0.4669875,0.05),(0.37359000000000003,0.49812,0.05),(0.3280012404606879,0.5292525,0.05),(0.2714068427195601,0.560385,0.05),(0.19442240018513812,0.5915175,0.05),(0.0,0.62265,0.05),(-0.0,0.62265,0.05),(-0.19442240018513812,0.5915175,0.05),(-0.2714068427195601,0.560385,0.05),(-0.3280012404606879,0.5292525,0.05),(-0.37359000000000003,0.49812,0.05),(-0.4118442634585919,0.4669875,0.05),(-0.4446610411032206,0.435855,0.05),(-0.47317303441103875,0.4047225,0.05),(-0.49812000000000006,0.37359,0.05),(-0.520015272077417,0.3424575,0.05),(-0.5392307176663808,0.311325,0.05),(-0.5560442297549271,0.2801925,0.05),(-0.5706681512928509,0.24906,0.05),(-0.5832672005554145,0.2179275,0.05),(-0.5939702437622613,0.186795,0.05),(-0.6028782701290121,0.1556625,0.05),(-0.6100699153375784,0.12453,0.05),(-0.6156053358230011,0.0933975,0.05),(-0.6195289277144369,0.062265,0.05),(-0.6218712004456791,0.0311325,0.05),(-0.62265,0.0,0.05),(-0.62265,0,0),(-0.62265,0,0),(-0.62265,0.7,0),(0.62265,0.7,0),(0.62265,0,0),(0.62265,0,0),(-0.62265,0,0.05),(-0.62265,0,0.05),(-0.62265,0.7,0.05),(0.62265,0.7,0.05),(0.62265,0,0.05),(0.62265,0,0.05)])),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.75,0.25))))]),
          Transform(DEF='Arco5',translation=(-0.03,5.94,-0.597),rotation=(0,1,0,1.9),scale=(0.575,0.3,1),
            children=[
            Shape(
              geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,84,85,-1,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,86,87,-1,1,43,44,2,-1,2,44,45,3,-1,3,45,46,4,-1,4,46,47,5,-1,5,47,48,6,-1,6,48,49,7,-1,7,49,50,8,-1,8,50,51,9,-1,9,51,52,10,-1,10,52,53,11,-1,11,53,54,12,-1,12,54,55,13,-1,13,55,56,14,-1,14,56,57,15,-1,15,57,58,16,-1,16,58,59,17,-1,17,59,60,18,-1,18,60,61,19,-1,19,61,62,20,-1,20,62,63,21,-1,21,63,64,22,-1,22,64,65,23,-1,23,65,66,24,-1,24,66,67,25,-1,25,67,68,26,-1,26,68,69,27,-1,27,69,70,28,-1,28,70,71,29,-1,29,71,72,30,-1,30,72,73,31,-1,31,73,74,32,-1,32,74,75,33,-1,33,75,76,34,-1,34,76,77,35,-1,35,77,78,36,-1,36,78,79,37,-1,37,79,80,38,-1,38,80,81,39,-1,39,81,82,40,-1,40,82,83,41,-1],solid=False,
                coord=Coordinate(point=[(0.62265,0.0,0),(0.6218712004456791,0.0311325,0),(0.6195289277144369,0.062265,0),(0.6156053358230011,0.0933975,0),(0.6100699153375784,0.12453,0),(0.6028782701290121,0.1556625,0),(0.5939702437622613,0.186795,0),(0.5832672005554145,0.2179275,0),(0.5706681512928509,0.24906,0),(0.5560442297549271,0.2801925,0),(0.5392307176663808,0.311325,0),(0.520015272077417,0.3424575,0),(0.49812000000000006,0.37359,0),(0.47317303441103875,0.4047225,0),(0.4446610411032206,0.435855,0),(0.4118442634585919,0.4669875,0),(0.37359000000000003,0.49812,0),(0.3280012404606879,0.5292525,0),(0.2714068427195601,0.560385,0),(0.19442240018513812,0.5915175,0),(0.0,0.62265,0),(-0.0,0.62265,0),(-0.19442240018513812,0.5915175,0),(-0.2714068427195601,0.560385,0),(-0.3280012404606879,0.5292525,0),(-0.37359000000000003,0.49812,0),(-0.4118442634585919,0.4669875,0),(-0.4446610411032206,0.435855,0),(-0.47317303441103875,0.4047225,0),(-0.49812000000000006,0.37359,0),(-0.520015272077417,0.3424575,0),(-0.5392307176663808,0.311325,0),(-0.5560442297549271,0.2801925,0),(-0.5706681512928509,0.24906,0),(-0.5832672005554145,0.2179275,0),(-0.5939702437622613,0.186795,0),(-0.6028782701290121,0.1556625,0),(-0.6100699153375784,0.12453,0),(-0.6156053358230011,0.0933975,0),(-0.6195289277144369,0.062265,0),(-0.6218712004456791,0.0311325,0),(-0.62265,0.0,0),(0.62265,0.0,0.901),(0.6218712004456791,0.0311325,0.901),(0.6195289277144369,0.062265,0.901),(0.6156053358230011,0.0933975,0.901),(0.6100699153375784,0.12453,0.901),(0.6028782701290121,0.1556625,0.901),(0.5939702437622613,0.186795,0.901),(0.5832672005554145,0.2179275,0.901),(0.5706681512928509,0.24906,0.901),(0.5560442297549271,0.2801925,0.901),(0.5392307176663808,0.311325,0.901),(0.520015272077417,0.3424575,0.901),(0.49812000000000006,0.37359,0.901),(0.47317303441103875,0.4047225,0.901),(0.4446610411032206,0.435855,0.901),(0.4118442634585919,0.4669875,0.901),(0.37359000000000003,0.49812,0.901),(0.3280012404606879,0.5292525,0.901),(0.2714068427195601,0.560385,0.901),(0.19442240018513812,0.5915175,0.901),(0.0,0.62265,0.901),(-0.0,0.62265,0.901),(-0.19442240018513812,0.5915175,0.901),(-0.2714068427195601,0.560385,0.901),(-0.3280012404606879,0.5292525,0.901),(-0.37359000000000003,0.49812,0.901),(-0.4118442634585919,0.4669875,0.901),(-0.4446610411032206,0.435855,0.901),(-0.47317303441103875,0.4047225,0.901),(-0.49812000000000006,0.37359,0.901),(-0.520015272077417,0.3424575,0.901),(-0.5392307176663808,0.311325,0.901),(-0.5560442297549271,0.2801925,0.901),(-0.5706681512928509,0.24906,0.901),(-0.5832672005554145,0.2179275,0.901),(-0.5939702437622613,0.186795,0.901),(-0.6028782701290121,0.1556625,0.901),(-0.6100699153375784,0.12453,0.901),(-0.6156053358230011,0.0933975,0.901),(-0.6195289277144369,0.062265,0.901),(-0.6218712004456791,0.0311325,0.901),(-0.62265,0.0,0.901),(-0.62265,0,0),(-0.62265,0,0),(-0.62265,0,0),(0.62265,0,0),(0.62265,0,0),(0.62265,0,0),(-0.62265,0,0.901),(-0.62265,0,0.901),(-0.62265,0,0.901),(0.62265,0,0.901),(0.62265,0,0.901),(0.62265,0,0.901)])),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.75,0.25))))]),
          Transform(DEF='Arco6',translation=(-0.13,4.4,-0.85),rotation=(0,1,0,1.57),scale=(1,2.6,1),
            children=[
            Shape(
              geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,84,85,86,87,-1,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,90,91,92,93,-1,0,42,43,1,-1,1,43,44,2,-1,2,44,45,3,-1,3,45,46,4,-1,4,46,47,5,-1,5,47,48,6,-1,6,48,49,7,-1,7,49,50,8,-1,8,50,51,9,-1,9,51,52,10,-1,10,52,53,11,-1,11,53,54,12,-1,12,54,55,13,-1,13,55,56,14,-1,14,56,57,15,-1,15,57,58,16,-1,16,58,59,17,-1,17,59,60,18,-1,18,60,61,19,-1,19,61,62,20,-1,20,62,63,21,-1,89,0,42,95,-1],solid=False,
                coord=Coordinate(point=[(0.62265,0.0,0),(0.6218712004456791,0.0311325,0),(0.6195289277144369,0.062265,0),(0.6156053358230011,0.0933975,0),(0.6100699153375784,0.12453,0),(0.6028782701290121,0.1556625,0),(0.5939702437622613,0.186795,0),(0.5832672005554145,0.2179275,0),(0.5706681512928509,0.24906,0),(0.5560442297549271,0.2801925,0),(0.5392307176663808,0.311325,0),(0.520015272077417,0.3424575,0),(0.49812000000000006,0.37359,0),(0.47317303441103875,0.4047225,0),(0.4446610411032206,0.435855,0),(0.4118442634585919,0.4669875,0),(0.37359000000000003,0.49812,0),(0.3280012404606879,0.5292525,0),(0.2714068427195601,0.560385,0),(0.19442240018513812,0.5915175,0),(0.0,0.62265,0),(0.0,0.62265,0),(-0.19442240018513812,0.5915175,0),(-0.2714068427195601,0.560385,0),(-0.3280012404606879,0.5292525,0),(-0.37359000000000003,0.49812,0),(-0.4118442634585919,0.4669875,0),(-0.4446610411032206,0.435855,0),(-0.47317303441103875,0.4047225,0),(-0.49812000000000006,0.37359,0),(-0.520015272077417,0.3424575,0),(-0.5392307176663808,0.311325,0),(-0.5560442297549271,0.2801925,0),(-0.5706681512928509,0.24906,0),(-0.5832672005554145,0.2179275,0),(-0.5939702437622613,0.186795,0),(-0.6028782701290121,0.1556625,0),(-0.6100699153375784,0.12453,0),(-0.6156053358230011,0.0933975,0),(-0.6195289277144369,0.062265,0),(-0.6218712004456791,0.0311325,0),(-0.62265,1,0),(0.62265,0.0,1.24530.6218712004456791),(0.0311325,1.24530.6195289277144369,0.062265),(1.24530.6156053358230011,0.0933975,1.24530.6100699153375784),(0.12453,1.24530.6028782701290121,0.1556625),(1.24530.5939702437622613,0.186795,1.24530.5832672005554145),(0.2179275,1.24530.5706681512928509,0.24906),(1.24530.5560442297549271,0.2801925,1.24530.5392307176663808),(0.311325,1.24530.520015272077417,0.3424575),(1.24530.49812000000000006,0.37359,1.24530.47317303441103875),(0.4047225,1.24530.4446610411032206,0.435855),(1.24530.4118442634585919,0.4669875,1.24530.37359000000000003),(0.49812,1.24530.3280012404606879,0.5292525),(1.24530.2714068427195601,0.560385,1.24530.19442240018513812),(0.5915175,1.24530.0,0.62265),(1.2453,0,0.62265),(1.2453,-0.19442240018513812,0.5915175),(1.2453-0.2714068427195601,0.560385,1.2453-0.3280012404606879),(0.5292525,1.2453-0.37359000000000003,0.49812),(1.2453-0.4118442634585919,0.4669875,1.2453-0.4446610411032206),(0.435855,1.2453-0.47317303441103875,0.4047225),(1.2453-0.49812000000000006,0.37359,1.2453-0.520015272077417),(0.3424575,1.2453-0.5392307176663808,0.311325),(1.2453-0.5560442297549271,0.2801925,1.2453-0.5706681512928509),(0.24906,1.2453-0.5832672005554145,0.2179275),(1.2453-0.5939702437622613,0.186795,1.2453-0.6028782701290121),(0.1556625,1.2453-0.6100699153375784,0.12453),(1.2453-0.6156053358230011,0.0933975,1.2453-0.6195289277144369),(0.062265,1.2453-0.6218712004456791,0.0311325),(1.2453,-0.62265,0.0),(1.2453,0,0),(0,0.62265,0),(0,0.62265,0),(0,0.62265,0),(0,0.62265,0),(0,0.62265,0),(0,0,1),(1.2453,0.62265,1),(1.2453,0.62265,1),(1.2453,0.62265,1),(1.2453,0.62265,0)1.2453)])),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.75,0.25))))])]),
        Transform(DEF='MuroDietro3',translation=(-0.955,4.555,-3.39),
          children=[
          Shape(
            geometry=Box(size=(5.4,0.3,0.74)),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='MuroLatSottoSX2',translation=(-3.281,4.555,-1.965),
          children=[
          Shape(
            geometry=Box(size=(0.74,0.3,3.39)),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='MuroLatSottoDX2',translation=(-0.11,4.555,-2.165),
          children=[
          Shape(
            geometry=Box(size=(0.74,0.3,2)),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        #  Enter any text between the end tags 
   <Transform DEF="MuroLateraleDX2" translation='0.94 7.156 -1.7'>
        <Shape>
          <Box size='0.5 2.312 3.5'/>
          <Appearance>
            <Material diffuseColor='1 0.75 0.25'/>
          </Appearance>
        </Shape>
      </Transform>
    
        Transform(DEF='MuroDietro4',translation=(-1.495,6.507,-3.39),
          children=[
          Shape(
            geometry=Box(size=(0.87,3.61,0.74)),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='MuroDietro5SX',translation=(-3.285,6.507,-3.2595),
          children=[
          Shape(
            geometry=Box(size=(0.74,3.61,1.01)),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='MuroLat5SX',translation=(-3.285,6.507,0.165),
          children=[
          Shape(
            geometry=Box(size=(0.74,3.61,1.01)),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='MuroFrontCentale5',translation=(-1.72,6.507,0.165),
          children=[
          Shape(
            geometry=Box(size=(0.4,3.61,1.01)),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='MuroLat5SX2Centro',translation=(-3.285,6.507,-1.545),
          children=[
          Shape(
            geometry=Box(size=(0.74,3.61,0.45)),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='MuroLat5DX',translation=(0.049,6.107,0.165),
          children=[
          Shape(
            geometry=Box(size=(0.74,4.41,1.01)),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='MuroLat6DX',translation=(0.169,7.13,-0.845),
          children=[
          Shape(
            geometry=Box(size=(0.5,2.13,1.01)),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='MuroLat7DX',translation=(-0.081,6.507,-3.76),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,3,0,4,7,-1,0,1,2,3,-1,4,5,6,7,-1],solid=False,
              coord=Coordinate(point=[(0,-2.1,0),(0.5,-2.1,0),(0.5,-2.1,2.78),(0,-2.1,2.78),(0,1.805,0),(0.5,1.805,0),(0.5,1.805,2.78),(0,1.805,2.78)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='ArcoTorre1',translation=(-0.57,6.9,-3.76),scale=(0.79,0.79,1),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,84,85,86,87,88,89,-1,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,90,91,92,93,94,95,-1,0,42,43,1,-1,1,43,44,2,-1,2,44,45,3,-1,3,45,46,4,-1,4,46,47,5,-1,5,47,48,6,-1,6,48,49,7,-1,7,49,50,8,-1,8,50,51,9,-1,9,51,52,10,-1,10,52,53,11,-1,11,53,54,12,-1,12,54,55,13,-1,13,55,56,14,-1,14,56,57,15,-1,15,57,58,16,-1,16,58,59,17,-1,17,59,60,18,-1,18,60,61,19,-1,19,61,62,20,-1,20,62,63,21,-1,21,63,64,22,-1,22,64,65,23,-1,23,65,66,24,-1,24,66,67,25,-1,25,67,68,26,-1,26,68,69,27,-1,27,69,70,28,-1,28,70,71,29,-1,29,71,72,30,-1,30,72,73,31,-1,31,73,74,32,-1,32,74,75,33,-1,33,75,76,34,-1,34,76,77,35,-1,35,77,78,36,-1,36,78,79,37,-1,37,79,80,38,-1,38,80,81,39,-1,39,81,82,40,-1,40,82,83,41,-1,84,41,83,90,-1,89,0,42,95,-1],solid=False,
              coord=Coordinate(point=[(0.62265,0.0,0),(0.6218712004456791,0.0311325,0),(0.6195289277144369,0.062265,0),(0.6156053358230011,0.0933975,0),(0.6100699153375784,0.12453,0),(0.6028782701290121,0.1556625,0),(0.5939702437622613,0.186795,0),(0.5832672005554145,0.2179275,0),(0.5706681512928509,0.24906,0),(0.5560442297549271,0.2801925,0),(0.5392307176663808,0.311325,0),(0.520015272077417,0.3424575,0),(0.49812000000000006,0.37359,0),(0.47317303441103875,0.4047225,0),(0.4446610411032206,0.435855,0),(0.4118442634585919,0.4669875,0),(0.37359000000000003,0.49812,0),(0.3280012404606879,0.5292525,0),(0.2714068427195601,0.560385,0),(0.19442240018513812,0.5915175,0),(0.0,0.62265,0),(-0.0,0.62265,0),(-0.19442240018513812,0.5915175,0),(-0.2714068427195601,0.560385,0),(-0.3280012404606879,0.5292525,0),(-0.37359000000000003,0.49812,0),(-0.4118442634585919,0.4669875,0),(-0.4446610411032206,0.435855,0),(-0.47317303441103875,0.4047225,0),(-0.49812000000000006,0.37359,0),(-0.520015272077417,0.3424575,0),(-0.5392307176663808,0.311325,0),(-0.5560442297549271,0.2801925,0),(-0.5706681512928509,0.24906,0),(-0.5832672005554145,0.2179275,0),(-0.5939702437622613,0.186795,0),(-0.6028782701290121,0.1556625,0),(-0.6100699153375784,0.12453,0),(-0.6156053358230011,0.0933975,0),(-0.6195289277144369,0.062265,0),(-0.6218712004456791,0.0311325,0),(-0.62265,0.0,0),(0.62265,0.0,0.74),(0.6218712004456791,0.0311325,0.74),(0.6195289277144369,0.062265,0.74),(0.6156053358230011,0.0933975,0.74),(0.6100699153375784,0.12453,0.74),(0.6028782701290121,0.1556625,0.74),(0.5939702437622613,0.186795,0.74),(0.5832672005554145,0.2179275,0.74),(0.5706681512928509,0.24906,0.74),(0.5560442297549271,0.2801925,0.74),(0.5392307176663808,0.311325,0.74),(0.520015272077417,0.3424575,0.74),(0.49812000000000006,0.37359,0.74),(0.47317303441103875,0.4047225,0.74),(0.4446610411032206,0.435855,0.74),(0.4118442634585919,0.4669875,0.74),(0.37359000000000003,0.49812,0.74),(0.3280012404606879,0.5292525,0.74),(0.2714068427195601,0.560385,0.74),(0.19442240018513812,0.5915175,0.74),(0.0,0.62265,0.74),(-0.0,0.62265,0.74),(-0.19442240018513812,0.5915175,0.74),(-0.2714068427195601,0.560385,0.74),(-0.3280012404606879,0.5292525,0.74),(-0.37359000000000003,0.49812,0.74),(-0.4118442634585919,0.4669875,0.74),(-0.4446610411032206,0.435855,0.74),(-0.47317303441103875,0.4047225,0.74),(-0.49812000000000006,0.37359,0.74),(-0.520015272077417,0.3424575,0.74),(-0.5392307176663808,0.311325,0.74),(-0.5560442297549271,0.2801925,0.74),(-0.5706681512928509,0.24906,0.74),(-0.5832672005554145,0.2179275,0.74),(-0.5939702437622613,0.186795,0.74),(-0.6028782701290121,0.1556625,0.74),(-0.6100699153375784,0.12453,0.74),(-0.6156053358230011,0.0933975,0.74),(-0.6195289277144369,0.062265,0.74),(-0.6218712004456791,0.0311325,0.74),(-0.62265,0.0,0.74),(-0.62265,0,0),(-0.62265,0,0),(-0.62265,1.56,0),(0.62265,1.56,0),(0.62265,0,0),(0.62265,0,0),(-0.62265,0,0.74),(-0.62265,0,0.74),(-0.62265,1.56,0.74),(0.62265,1.56,0.74),(0.62265,0,0.74),(0.62265,0,0.74)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='ArcoTorre2',translation=(-2.42,6.9,-3.76),scale=(0.79,0.79,1),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,84,85,86,87,88,89,-1,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,90,91,92,93,94,95,-1,0,42,43,1,-1,1,43,44,2,-1,2,44,45,3,-1,3,45,46,4,-1,4,46,47,5,-1,5,47,48,6,-1,6,48,49,7,-1,7,49,50,8,-1,8,50,51,9,-1,9,51,52,10,-1,10,52,53,11,-1,11,53,54,12,-1,12,54,55,13,-1,13,55,56,14,-1,14,56,57,15,-1,15,57,58,16,-1,16,58,59,17,-1,17,59,60,18,-1,18,60,61,19,-1,19,61,62,20,-1,20,62,63,21,-1,21,63,64,22,-1,22,64,65,23,-1,23,65,66,24,-1,24,66,67,25,-1,25,67,68,26,-1,26,68,69,27,-1,27,69,70,28,-1,28,70,71,29,-1,29,71,72,30,-1,30,72,73,31,-1,31,73,74,32,-1,32,74,75,33,-1,33,75,76,34,-1,34,76,77,35,-1,35,77,78,36,-1,36,78,79,37,-1,37,79,80,38,-1,38,80,81,39,-1,39,81,82,40,-1,40,82,83,41,-1,84,41,83,90,-1,89,0,42,95,-1],solid=False,
              coord=Coordinate(point=[(0.62265,0.0,0),(0.6218712004456791,0.0311325,0),(0.6195289277144369,0.062265,0),(0.6156053358230011,0.0933975,0),(0.6100699153375784,0.12453,0),(0.6028782701290121,0.1556625,0),(0.5939702437622613,0.186795,0),(0.5832672005554145,0.2179275,0),(0.5706681512928509,0.24906,0),(0.5560442297549271,0.2801925,0),(0.5392307176663808,0.311325,0),(0.520015272077417,0.3424575,0),(0.49812000000000006,0.37359,0),(0.47317303441103875,0.4047225,0),(0.4446610411032206,0.435855,0),(0.4118442634585919,0.4669875,0),(0.37359000000000003,0.49812,0),(0.3280012404606879,0.5292525,0),(0.2714068427195601,0.560385,0),(0.19442240018513812,0.5915175,0),(0.0,0.62265,0),(-0.0,0.62265,0),(-0.19442240018513812,0.5915175,0),(-0.2714068427195601,0.560385,0),(-0.3280012404606879,0.5292525,0),(-0.37359000000000003,0.49812,0),(-0.4118442634585919,0.4669875,0),(-0.4446610411032206,0.435855,0),(-0.47317303441103875,0.4047225,0),(-0.49812000000000006,0.37359,0),(-0.520015272077417,0.3424575,0),(-0.5392307176663808,0.311325,0),(-0.5560442297549271,0.2801925,0),(-0.5706681512928509,0.24906,0),(-0.5832672005554145,0.2179275,0),(-0.5939702437622613,0.186795,0),(-0.6028782701290121,0.1556625,0),(-0.6100699153375784,0.12453,0),(-0.6156053358230011,0.0933975,0),(-0.6195289277144369,0.062265,0),(-0.6218712004456791,0.0311325,0),(-0.62265,0.0,0),(0.62265,0.0,0.74),(0.6218712004456791,0.0311325,0.74),(0.6195289277144369,0.062265,0.74),(0.6156053358230011,0.0933975,0.74),(0.6100699153375784,0.12453,0.74),(0.6028782701290121,0.1556625,0.74),(0.5939702437622613,0.186795,0.74),(0.5832672005554145,0.2179275,0.74),(0.5706681512928509,0.24906,0.74),(0.5560442297549271,0.2801925,0.74),(0.5392307176663808,0.311325,0.74),(0.520015272077417,0.3424575,0.74),(0.49812000000000006,0.37359,0.74),(0.47317303441103875,0.4047225,0.74),(0.4446610411032206,0.435855,0.74),(0.4118442634585919,0.4669875,0.74),(0.37359000000000003,0.49812,0.74),(0.3280012404606879,0.5292525,0.74),(0.2714068427195601,0.560385,0.74),(0.19442240018513812,0.5915175,0.74),(0.0,0.62265,0.74),(-0.0,0.62265,0.74),(-0.19442240018513812,0.5915175,0.74),(-0.2714068427195601,0.560385,0.74),(-0.3280012404606879,0.5292525,0.74),(-0.37359000000000003,0.49812,0.74),(-0.4118442634585919,0.4669875,0.74),(-0.4446610411032206,0.435855,0.74),(-0.47317303441103875,0.4047225,0.74),(-0.49812000000000006,0.37359,0.74),(-0.520015272077417,0.3424575,0.74),(-0.5392307176663808,0.311325,0.74),(-0.5560442297549271,0.2801925,0.74),(-0.5706681512928509,0.24906,0.74),(-0.5832672005554145,0.2179275,0.74),(-0.5939702437622613,0.186795,0.74),(-0.6028782701290121,0.1556625,0.74),(-0.6100699153375784,0.12453,0.74),(-0.6156053358230011,0.0933975,0.74),(-0.6195289277144369,0.062265,0.74),(-0.6218712004456791,0.0311325,0.74),(-0.62265,0.0,0.74),(-0.62265,0,0),(-0.62265,0,0),(-0.62265,1.56,0),(0.62265,1.56,0),(0.62265,0,0),(0.62265,0,0),(-0.62265,0,0.74),(-0.62265,0,0.74),(-0.62265,1.56,0.74),(0.62265,1.56,0.74),(0.62265,0,0.74),(0.62265,0,0.74)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='ArcoTorre3',translation=(-3.651,6.9,-2.261),rotation=(0,1,0,1.57),scale=(0.79,0.79,1),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,84,85,86,87,88,89,-1,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,90,91,92,93,94,95,-1,0,42,43,1,-1,1,43,44,2,-1,2,44,45,3,-1,3,45,46,4,-1,4,46,47,5,-1,5,47,48,6,-1,6,48,49,7,-1,7,49,50,8,-1,8,50,51,9,-1,9,51,52,10,-1,10,52,53,11,-1,11,53,54,12,-1,12,54,55,13,-1,13,55,56,14,-1,14,56,57,15,-1,15,57,58,16,-1,16,58,59,17,-1,17,59,60,18,-1,18,60,61,19,-1,19,61,62,20,-1,20,62,63,21,-1,21,63,64,22,-1,22,64,65,23,-1,23,65,66,24,-1,24,66,67,25,-1,25,67,68,26,-1,26,68,69,27,-1,27,69,70,28,-1,28,70,71,29,-1,29,71,72,30,-1,30,72,73,31,-1,31,73,74,32,-1,32,74,75,33,-1,33,75,76,34,-1,34,76,77,35,-1,35,77,78,36,-1,36,78,79,37,-1,37,79,80,38,-1,38,80,81,39,-1,39,81,82,40,-1,40,82,83,41,-1,84,41,83,90,-1,89,0,42,95,-1],solid=False,
              coord=Coordinate(point=[(0.62265,0.0,0),(0.6218712004456791,0.0311325,0),(0.6195289277144369,0.062265,0),(0.6156053358230011,0.0933975,0),(0.6100699153375784,0.12453,0),(0.6028782701290121,0.1556625,0),(0.5939702437622613,0.186795,0),(0.5832672005554145,0.2179275,0),(0.5706681512928509,0.24906,0),(0.5560442297549271,0.2801925,0),(0.5392307176663808,0.311325,0),(0.520015272077417,0.3424575,0),(0.49812000000000006,0.37359,0),(0.47317303441103875,0.4047225,0),(0.4446610411032206,0.435855,0),(0.4118442634585919,0.4669875,0),(0.37359000000000003,0.49812,0),(0.3280012404606879,0.5292525,0),(0.2714068427195601,0.560385,0),(0.19442240018513812,0.5915175,0),(0.0,0.62265,0),(-0.0,0.62265,0),(-0.19442240018513812,0.5915175,0),(-0.2714068427195601,0.560385,0),(-0.3280012404606879,0.5292525,0),(-0.37359000000000003,0.49812,0),(-0.4118442634585919,0.4669875,0),(-0.4446610411032206,0.435855,0),(-0.47317303441103875,0.4047225,0),(-0.49812000000000006,0.37359,0),(-0.520015272077417,0.3424575,0),(-0.5392307176663808,0.311325,0),(-0.5560442297549271,0.2801925,0),(-0.5706681512928509,0.24906,0),(-0.5832672005554145,0.2179275,0),(-0.5939702437622613,0.186795,0),(-0.6028782701290121,0.1556625,0),(-0.6100699153375784,0.12453,0),(-0.6156053358230011,0.0933975,0),(-0.6195289277144369,0.062265,0),(-0.6218712004456791,0.0311325,0),(-0.62265,0.0,0),(0.62265,0.0,0.74),(0.6218712004456791,0.0311325,0.74),(0.6195289277144369,0.062265,0.74),(0.6156053358230011,0.0933975,0.74),(0.6100699153375784,0.12453,0.74),(0.6028782701290121,0.1556625,0.74),(0.5939702437622613,0.186795,0.74),(0.5832672005554145,0.2179275,0.74),(0.5706681512928509,0.24906,0.74),(0.5560442297549271,0.2801925,0.74),(0.5392307176663808,0.311325,0.74),(0.520015272077417,0.3424575,0.74),(0.49812000000000006,0.37359,0.74),(0.47317303441103875,0.4047225,0.74),(0.4446610411032206,0.435855,0.74),(0.4118442634585919,0.4669875,0.74),(0.37359000000000003,0.49812,0.74),(0.3280012404606879,0.5292525,0.74),(0.2714068427195601,0.560385,0.74),(0.19442240018513812,0.5915175,0.74),(0.0,0.62265,0.74),(-0.0,0.62265,0.74),(-0.19442240018513812,0.5915175,0.74),(-0.2714068427195601,0.560385,0.74),(-0.3280012404606879,0.5292525,0.74),(-0.37359000000000003,0.49812,0.74),(-0.4118442634585919,0.4669875,0.74),(-0.4446610411032206,0.435855,0.74),(-0.47317303441103875,0.4047225,0.74),(-0.49812000000000006,0.37359,0.74),(-0.520015272077417,0.3424575,0.74),(-0.5392307176663808,0.311325,0.74),(-0.5560442297549271,0.2801925,0.74),(-0.5706681512928509,0.24906,0.74),(-0.5832672005554145,0.2179275,0.74),(-0.5939702437622613,0.186795,0.74),(-0.6028782701290121,0.1556625,0.74),(-0.6100699153375784,0.12453,0.74),(-0.6156053358230011,0.0933975,0.74),(-0.6195289277144369,0.062265,0.74),(-0.6218712004456791,0.0311325,0.74),(-0.62265,0.0,0.74),(-0.62265,0,0),(-0.62265,0,0),(-0.62265,1.56,0),(0.62265,1.56,0),(0.62265,0,0),(0.62265,0,0),(-0.62265,0,0.74),(-0.62265,0,0.74),(-0.62265,1.56,0.74),(0.62265,1.56,0.74),(0.62265,0,0.74),(0.62265,0,0.74)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='ArcoTorre4',translation=(-3.651,6.9,-0.831),rotation=(0,1,0,1.57),scale=(0.79,0.79,1),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,84,85,86,87,88,89,-1,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,90,91,92,93,94,95,-1,0,42,43,1,-1,1,43,44,2,-1,2,44,45,3,-1,3,45,46,4,-1,4,46,47,5,-1,5,47,48,6,-1,6,48,49,7,-1,7,49,50,8,-1,8,50,51,9,-1,9,51,52,10,-1,10,52,53,11,-1,11,53,54,12,-1,12,54,55,13,-1,13,55,56,14,-1,14,56,57,15,-1,15,57,58,16,-1,16,58,59,17,-1,17,59,60,18,-1,18,60,61,19,-1,19,61,62,20,-1,20,62,63,21,-1,21,63,64,22,-1,22,64,65,23,-1,23,65,66,24,-1,24,66,67,25,-1,25,67,68,26,-1,26,68,69,27,-1,27,69,70,28,-1,28,70,71,29,-1,29,71,72,30,-1,30,72,73,31,-1,31,73,74,32,-1,32,74,75,33,-1,33,75,76,34,-1,34,76,77,35,-1,35,77,78,36,-1,36,78,79,37,-1,37,79,80,38,-1,38,80,81,39,-1,39,81,82,40,-1,40,82,83,41,-1,84,41,83,90,-1,89,0,42,95,-1],solid=False,
              coord=Coordinate(point=[(0.62265,0.0,0),(0.6218712004456791,0.0311325,0),(0.6195289277144369,0.062265,0),(0.6156053358230011,0.0933975,0),(0.6100699153375784,0.12453,0),(0.6028782701290121,0.1556625,0),(0.5939702437622613,0.186795,0),(0.5832672005554145,0.2179275,0),(0.5706681512928509,0.24906,0),(0.5560442297549271,0.2801925,0),(0.5392307176663808,0.311325,0),(0.520015272077417,0.3424575,0),(0.49812000000000006,0.37359,0),(0.47317303441103875,0.4047225,0),(0.4446610411032206,0.435855,0),(0.4118442634585919,0.4669875,0),(0.37359000000000003,0.49812,0),(0.3280012404606879,0.5292525,0),(0.2714068427195601,0.560385,0),(0.19442240018513812,0.5915175,0),(0.0,0.62265,0),(-0.0,0.62265,0),(-0.19442240018513812,0.5915175,0),(-0.2714068427195601,0.560385,0),(-0.3280012404606879,0.5292525,0),(-0.37359000000000003,0.49812,0),(-0.4118442634585919,0.4669875,0),(-0.4446610411032206,0.435855,0),(-0.47317303441103875,0.4047225,0),(-0.49812000000000006,0.37359,0),(-0.520015272077417,0.3424575,0),(-0.5392307176663808,0.311325,0),(-0.5560442297549271,0.2801925,0),(-0.5706681512928509,0.24906,0),(-0.5832672005554145,0.2179275,0),(-0.5939702437622613,0.186795,0),(-0.6028782701290121,0.1556625,0),(-0.6100699153375784,0.12453,0),(-0.6156053358230011,0.0933975,0),(-0.6195289277144369,0.062265,0),(-0.6218712004456791,0.0311325,0),(-0.62265,0.0,0),(0.62265,0.0,0.74),(0.6218712004456791,0.0311325,0.74),(0.6195289277144369,0.062265,0.74),(0.6156053358230011,0.0933975,0.74),(0.6100699153375784,0.12453,0.74),(0.6028782701290121,0.1556625,0.74),(0.5939702437622613,0.186795,0.74),(0.5832672005554145,0.2179275,0.74),(0.5706681512928509,0.24906,0.74),(0.5560442297549271,0.2801925,0.74),(0.5392307176663808,0.311325,0.74),(0.520015272077417,0.3424575,0.74),(0.49812000000000006,0.37359,0.74),(0.47317303441103875,0.4047225,0.74),(0.4446610411032206,0.435855,0.74),(0.4118442634585919,0.4669875,0.74),(0.37359000000000003,0.49812,0.74),(0.3280012404606879,0.5292525,0.74),(0.2714068427195601,0.560385,0.74),(0.19442240018513812,0.5915175,0.74),(0.0,0.62265,0.74),(-0.0,0.62265,0.74),(-0.19442240018513812,0.5915175,0.74),(-0.2714068427195601,0.560385,0.74),(-0.3280012404606879,0.5292525,0.74),(-0.37359000000000003,0.49812,0.74),(-0.4118442634585919,0.4669875,0.74),(-0.4446610411032206,0.435855,0.74),(-0.47317303441103875,0.4047225,0.74),(-0.49812000000000006,0.37359,0.74),(-0.520015272077417,0.3424575,0.74),(-0.5392307176663808,0.311325,0.74),(-0.5560442297549271,0.2801925,0.74),(-0.5706681512928509,0.24906,0.74),(-0.5832672005554145,0.2179275,0.74),(-0.5939702437622613,0.186795,0.74),(-0.6028782701290121,0.1556625,0.74),(-0.6100699153375784,0.12453,0.74),(-0.6156053358230011,0.0933975,0.74),(-0.6195289277144369,0.062265,0.74),(-0.6218712004456791,0.0311325,0.74),(-0.62265,0.0,0.74),(-0.62265,0,0),(-0.62265,0,0),(-0.62265,1.56,0),(0.62265,1.56,0),(0.62265,0,0),(0.62265,0,0),(-0.62265,0,0.74),(-0.62265,0,0.74),(-0.62265,1.56,0.74),(0.62265,1.56,0.74),(0.62265,0,0.74),(0.62265,0,0.74)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='ArcoTorre5',translation=(-0.92,6.9,-0.34),scale=(0.971,0.971,1),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,84,85,86,87,88,89,-1,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,90,91,92,93,94,95,-1,0,42,43,1,-1,1,43,44,2,-1,2,44,45,3,-1,3,45,46,4,-1,4,46,47,5,-1,5,47,48,6,-1,6,48,49,7,-1,7,49,50,8,-1,8,50,51,9,-1,9,51,52,10,-1,10,52,53,11,-1,11,53,54,12,-1,12,54,55,13,-1,13,55,56,14,-1,14,56,57,15,-1,15,57,58,16,-1,16,58,59,17,-1,17,59,60,18,-1,18,60,61,19,-1,19,61,62,20,-1,20,62,63,21,-1,21,63,64,22,-1,22,64,65,23,-1,23,65,66,24,-1,24,66,67,25,-1,25,67,68,26,-1,26,68,69,27,-1,27,69,70,28,-1,28,70,71,29,-1,29,71,72,30,-1,30,72,73,31,-1,31,73,74,32,-1,32,74,75,33,-1,33,75,76,34,-1,34,76,77,35,-1,35,77,78,36,-1,36,78,79,37,-1,37,79,80,38,-1,38,80,81,39,-1,39,81,82,40,-1,40,82,83,41,-1,84,41,83,90,-1,89,0,42,95,-1],solid=False,
              coord=Coordinate(point=[(0.62265,0.0,0),(0.6218712004456791,0.0311325,0),(0.6195289277144369,0.062265,0),(0.6156053358230011,0.0933975,0),(0.6100699153375784,0.12453,0),(0.6028782701290121,0.1556625,0),(0.5939702437622613,0.186795,0),(0.5832672005554145,0.2179275,0),(0.5706681512928509,0.24906,0),(0.5560442297549271,0.2801925,0),(0.5392307176663808,0.311325,0),(0.520015272077417,0.3424575,0),(0.49812000000000006,0.37359,0),(0.47317303441103875,0.4047225,0),(0.4446610411032206,0.435855,0),(0.4118442634585919,0.4669875,0),(0.37359000000000003,0.49812,0),(0.3280012404606879,0.5292525,0),(0.2714068427195601,0.560385,0),(0.19442240018513812,0.5915175,0),(0.0,0.62265,0),(-0.0,0.62265,0),(-0.19442240018513812,0.5915175,0),(-0.2714068427195601,0.560385,0),(-0.3280012404606879,0.5292525,0),(-0.37359000000000003,0.49812,0),(-0.4118442634585919,0.4669875,0),(-0.4446610411032206,0.435855,0),(-0.47317303441103875,0.4047225,0),(-0.49812000000000006,0.37359,0),(-0.520015272077417,0.3424575,0),(-0.5392307176663808,0.311325,0),(-0.5560442297549271,0.2801925,0),(-0.5706681512928509,0.24906,0),(-0.5832672005554145,0.2179275,0),(-0.5939702437622613,0.186795,0),(-0.6028782701290121,0.1556625,0),(-0.6100699153375784,0.12453,0),(-0.6156053358230011,0.0933975,0),(-0.6195289277144369,0.062265,0),(-0.6218712004456791,0.0311325,0),(-0.62265,0.0,0),(0.62265,0.0,1.01),(0.6218712004456791,0.0311325,1.01),(0.6195289277144369,0.062265,1.01),(0.6156053358230011,0.0933975,1.01),(0.6100699153375784,0.12453,1.01),(0.6028782701290121,0.1556625,1.01),(0.5939702437622613,0.186795,1.01),(0.5832672005554145,0.2179275,1.01),(0.5706681512928509,0.24906,1.01),(0.5560442297549271,0.2801925,1.01),(0.5392307176663808,0.311325,1.01),(0.520015272077417,0.3424575,1.01),(0.49812000000000006,0.37359,1.01),(0.47317303441103875,0.4047225,1.01),(0.4446610411032206,0.435855,1.01),(0.4118442634585919,0.4669875,1.01),(0.37359000000000003,0.49812,1.01),(0.3280012404606879,0.5292525,1.01),(0.2714068427195601,0.560385,1.01),(0.19442240018513812,0.5915175,1.01),(0.0,0.62265,1.01),(-0.0,0.62265,1.01),(-0.19442240018513812,0.5915175,1.01),(-0.2714068427195601,0.560385,1.01),(-0.3280012404606879,0.5292525,1.01),(-0.37359000000000003,0.49812,1.01),(-0.4118442634585919,0.4669875,1.01),(-0.4446610411032206,0.435855,1.01),(-0.47317303441103875,0.4047225,1.01),(-0.49812000000000006,0.37359,1.01),(-0.520015272077417,0.3424575,1.01),(-0.5392307176663808,0.311325,1.01),(-0.5560442297549271,0.2801925,1.01),(-0.5706681512928509,0.24906,1.01),(-0.5832672005554145,0.2179275,1.01),(-0.5939702437622613,0.186795,1.01),(-0.6028782701290121,0.1556625,1.01),(-0.6100699153375784,0.12453,1.01),(-0.6156053358230011,0.0933975,1.01),(-0.6195289277144369,0.062265,1.01),(-0.6218712004456791,0.0311325,1.01),(-0.62265,0.0,1.01),(-0.62265,0,0),(-0.62265,0,0),(-0.62265,1.56,0),(0.62265,1.56,0),(0.62265,0,0),(0.62265,0,0),(-0.62265,0,1.01),(-0.62265,0,1.01),(-0.62265,1.56,1.01),(0.62265,1.56,1.01),(0.62265,0,1.01),(0.62265,0,1.01)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='ArcoTorre6',translation=(-2.418,7.01,-0.34),scale=(0.8,0.8,1),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,84,85,86,87,88,89,-1,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,90,91,92,93,94,95,-1,0,42,43,1,-1,1,43,44,2,-1,2,44,45,3,-1,3,45,46,4,-1,4,46,47,5,-1,5,47,48,6,-1,6,48,49,7,-1,7,49,50,8,-1,8,50,51,9,-1,9,51,52,10,-1,10,52,53,11,-1,11,53,54,12,-1,12,54,55,13,-1,13,55,56,14,-1,14,56,57,15,-1,15,57,58,16,-1,16,58,59,17,-1,17,59,60,18,-1,18,60,61,19,-1,19,61,62,20,-1,20,62,63,21,-1,21,63,64,22,-1,22,64,65,23,-1,23,65,66,24,-1,24,66,67,25,-1,25,67,68,26,-1,26,68,69,27,-1,27,69,70,28,-1,28,70,71,29,-1,29,71,72,30,-1,30,72,73,31,-1,31,73,74,32,-1,32,74,75,33,-1,33,75,76,34,-1,34,76,77,35,-1,35,77,78,36,-1,36,78,79,37,-1,37,79,80,38,-1,38,80,81,39,-1,39,81,82,40,-1,40,82,83,41,-1,84,41,83,90,-1,89,0,42,95,-1],solid=False,
              coord=Coordinate(point=[(0.62265,0.0,0),(0.6218712004456791,0.0311325,0),(0.6195289277144369,0.062265,0),(0.6156053358230011,0.0933975,0),(0.6100699153375784,0.12453,0),(0.6028782701290121,0.1556625,0),(0.5939702437622613,0.186795,0),(0.5832672005554145,0.2179275,0),(0.5706681512928509,0.24906,0),(0.5560442297549271,0.2801925,0),(0.5392307176663808,0.311325,0),(0.520015272077417,0.3424575,0),(0.49812000000000006,0.37359,0),(0.47317303441103875,0.4047225,0),(0.4446610411032206,0.435855,0),(0.4118442634585919,0.4669875,0),(0.37359000000000003,0.49812,0),(0.3280012404606879,0.5292525,0),(0.2714068427195601,0.560385,0),(0.19442240018513812,0.5915175,0),(0.0,0.62265,0),(-0.0,0.62265,0),(-0.19442240018513812,0.5915175,0),(-0.2714068427195601,0.560385,0),(-0.3280012404606879,0.5292525,0),(-0.37359000000000003,0.49812,0),(-0.4118442634585919,0.4669875,0),(-0.4446610411032206,0.435855,0),(-0.47317303441103875,0.4047225,0),(-0.49812000000000006,0.37359,0),(-0.520015272077417,0.3424575,0),(-0.5392307176663808,0.311325,0),(-0.5560442297549271,0.2801925,0),(-0.5706681512928509,0.24906,0),(-0.5832672005554145,0.2179275,0),(-0.5939702437622613,0.186795,0),(-0.6028782701290121,0.1556625,0),(-0.6100699153375784,0.12453,0),(-0.6156053358230011,0.0933975,0),(-0.6195289277144369,0.062265,0),(-0.6218712004456791,0.0311325,0),(-0.62265,0.0,0),(0.62265,0.0,1.01),(0.6218712004456791,0.0311325,1.01),(0.6195289277144369,0.062265,1.01),(0.6156053358230011,0.0933975,1.01),(0.6100699153375784,0.12453,1.01),(0.6028782701290121,0.1556625,1.01),(0.5939702437622613,0.186795,1.01),(0.5832672005554145,0.2179275,1.01),(0.5706681512928509,0.24906,1.01),(0.5560442297549271,0.2801925,1.01),(0.5392307176663808,0.311325,1.01),(0.520015272077417,0.3424575,1.01),(0.49812000000000006,0.37359,1.01),(0.47317303441103875,0.4047225,1.01),(0.4446610411032206,0.435855,1.01),(0.4118442634585919,0.4669875,1.01),(0.37359000000000003,0.49812,1.01),(0.3280012404606879,0.5292525,1.01),(0.2714068427195601,0.560385,1.01),(0.19442240018513812,0.5915175,1.01),(0.0,0.62265,1.01),(-0.0,0.62265,1.01),(-0.19442240018513812,0.5915175,1.01),(-0.2714068427195601,0.560385,1.01),(-0.3280012404606879,0.5292525,1.01),(-0.37359000000000003,0.49812,1.01),(-0.4118442634585919,0.4669875,1.01),(-0.4446610411032206,0.435855,1.01),(-0.47317303441103875,0.4047225,1.01),(-0.49812000000000006,0.37359,1.01),(-0.520015272077417,0.3424575,1.01),(-0.5392307176663808,0.311325,1.01),(-0.5560442297549271,0.2801925,1.01),(-0.5706681512928509,0.24906,1.01),(-0.5832672005554145,0.2179275,1.01),(-0.5939702437622613,0.186795,1.01),(-0.6028782701290121,0.1556625,1.01),(-0.6100699153375784,0.12453,1.01),(-0.6156053358230011,0.0933975,1.01),(-0.6195289277144369,0.062265,1.01),(-0.6218712004456791,0.0311325,1.01),(-0.62265,0.0,1.01),(-0.62265,0,0),(-0.62265,0,0),(-0.62265,1.56,0),(0.62265,1.56,0),(0.62265,0,0),(0.62265,0,0),(-0.62265,0,1.01),(-0.62265,0,1.01),(-0.62265,1.56,1.01),(0.62265,1.56,1.01),(0.62265,0,1.01),(0.62265,0,1.01)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='Tetto',translation=(-3.6175,8.78,-3.6),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,4,-1,0,3,4,-1,1,2,4,-1,2,3,4,-1],solid=False,
              coord=Coordinate(point=[(0,0,0),(4,0,0),(4,0,4.07),(0,0,4.07),(2,2.91,2.035)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))])]),
      #  FACCIATA
      Transform(DEF='FACCIATA',
        # TODO add children nodes here
        ),
      Transform(DEF='FacciataSX',translation=(-3.29,-2.134,0.67),
        children=[
        Transform(DEF='FacciataSXest',
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,6,11,5,-1,0,20,13,12,15,14,21,5,-1,20,21,4,24,25,1,-1],solid=False,
              coord=Coordinate(point=[(0,0,0),(7.3,0,0),(7.3,7.73,0),(4.07,7.73,0),(4.07,6.842,0),(0,6.842,0),(0,0,-1.34),(7.3,0,-1.34),(7.3,7.73,-1.34),(4.07,7.73,-1.34),(4.07,6.842,-1.34),(0,6.842,-1.34),(1.603,4.27,0),(2.461,4.27,0),(2.461,5.233,0),(1.603,5.233,0),(1.603,4.27,-1.34),(2.461,4.27,-1.34),(2.461,5.233,-1.34),(1.603,5.233,-1.34),(2.461,0,0),(2.461,6.842,0),(2.461,0,-1.34),(2.461,6.842,-1.34),(4.07,5.52,0),(7.3,5.52,0)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='FacciataSXint',
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[6,22,17,16,19,18,23,11,-1,22,23,29,30,10,26,28,27,7,-1],solid=False,
              coord=Coordinate(point=[(0,0,0),(7.3,0,0),(7.3,7.73,0),(4.07,7.73,0),(4.07,6.44,0),(0,6.44,0),(0,0,-1.34),(7.3,0,-1.34),(7.3,7.73,-1.34),(4.07,7.73,-1.34),(4.07,5.45,-1.34),(0,6.44,-1.34),(1.603,4.27,0),(2.461,4.27,0),(2.461,5.233,0),(1.603,5.233,0),(1.603,4.27,-1.34),(2.461,4.27,-1.34),(2.461,5.233,-1.34),(1.603,5.233,-1.34),(2.461,0,0),(2.461,6.44,0),(2.461,0,-1.34),(2.461,6.44,-1.34),(4.07,5.52,0),(7.3,5.52,0),(4.07,5.52,-1.34),(7.3,4,-1.34),(4.07,4,-1.34),(2.861,6.44,-1.34),(2.861,6.34,-1.34)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='FacciataSXintOrizzontale',
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[4,10,11,5,-1,10,11,26,27,-1],solid=False,
              coord=Coordinate(point=[(0,0,0),(7.3,0,0),(7.3,7.73,0),(4.07,7.73,0),(4.07,6.842,0),(0,6.842,0),(0,0,-1.01),(7.3,0,-1.01),(7.3,7.73,-1.01),(4.07,7.73,-1.01),(4.07,6.842,-1.01),(0,6.842,-1.01),(1.603,4.27,0),(2.461,4.27,0),(2.461,5.233,0),(1.603,5.233,0),(1.603,4.27,-1.01),(2.461,4.27,-1.01),(2.461,5.233,-1.01),(1.603,5.233,-1.01),(2.461,0,0),(2.461,6.842,0),(2.461,0,-1.01),(2.461,6.842,-1.01),(4.07,5.52,0),(7.3,5.52,0),(0,6.342,-1.01),(4.07,6.342,-1.01)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='FacciataSXestDIETRO',translation=(0,0,-0.1),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[3,2,25,24,-1,25,24,26,27,-1,3,24,26,28,-1],solid=False,
              coord=Coordinate(point=[(0,0,0),(7.3,0,0),(8.075,7.73,0),(4.07,7.73,0),(4.07,6.43,0),(0,6.43,0),(0,0,-1.34),(7.3,0,-1.34),(7.3,7.73,-1.34),(4.07,7.73,-1.34),(4.07,6.43,-1.34),(0,6.43,-1.34),(1.603,4.27,0),(2.461,4.27,0),(2.461,5.233,0),(1.603,5.233,0),(1.603,4.27,-1.34),(2.461,4.27,-1.34),(2.461,5.233,-1.34),(1.603,5.233,-1.34),(2.461,0,0),(2.461,6.43,0),(2.461,0,-1.34),(2.461,6.43,-1.34),(4.07,5.52,0),(8.075,5.52,0),(4.07,5.52,0.1),(8.075,5.52,0.1),(4.07,7.73,0.1)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='FacciataDXestDIETRO',translation=(6.67,0,-0.1),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[3,2,25,24,-1,25,24,26,27,-1],solid=False,
              coord=Coordinate(point=[(0,0,0),(7.3,0,0),(7.3,7.73,0),(3.28,7.73,0),(4.07,6.43,0),(0,6.43,0),(0,0,-1.34),(7.3,0,-1.34),(7.3,7.73,-1.34),(4.07,7.73,-1.34),(4.07,6.43,-1.34),(0,6.43,-1.34),(1.603,4.27,0),(2.461,4.27,0),(2.461,5.233,0),(1.603,5.233,0),(1.603,4.27,-1.34),(2.461,4.27,-1.34),(2.461,5.233,-1.34),(1.603,5.233,-1.34),(2.461,0,0),(2.461,6.43,0),(2.461,0,-1.34),(2.461,6.43,-1.34),(3.28,5.52,0),(7.3,5.52,0),(3.28,5.52,0.1),(7.73,5.52,0.1)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))])]),
      Transform(DEF='FacciataDX',translation=(9.08,0.015,-0.008),
        children=[
        Shape(
          geometry=Box(size=(3.2,4.32,1.357)),
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.75,0.25))))]),
      Transform(DEF='FacciataSopra',translation=(7,5,0.57),
        children=[
        Shape(
          geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,5,6,7,8,9,-1],solid=False,
            coord=Coordinate(point=[(-5,0,0),(3,0,0),(1.7,1,0),(1.5,1.5,0),(0.27,3.65,0),(-2.8,3.65,0),(-3.9,2,0),(-4.1,1.2,0),(-5,0.7,0)])),
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.75,0.25))))]),
      Transform(DEF='ArcoIngresso',translation=(5.72,0.31,-0.09),scale=(1.9,1.9,1),
        children=[
        Shape(
          geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,84,85,86,87,88,89,-1,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,90,91,92,93,94,95,-1,0,42,43,1,-1,1,43,44,2,-1,2,44,45,3,-1,3,45,46,4,-1,4,46,47,5,-1,5,47,48,6,-1,6,48,49,7,-1,7,49,50,8,-1,8,50,51,9,-1,9,51,52,10,-1,10,52,53,11,-1,11,53,54,12,-1,12,54,55,13,-1,13,55,56,14,-1,14,56,57,15,-1,15,57,58,16,-1,16,58,59,17,-1,17,59,60,18,-1,18,60,61,19,-1,19,61,62,20,-1,20,62,63,21,-1,21,63,64,22,-1,22,64,65,23,-1,23,65,66,24,-1,24,66,67,25,-1,25,67,68,26,-1,26,68,69,27,-1,27,69,70,28,-1,28,70,71,29,-1,29,71,72,30,-1,30,72,73,31,-1,31,73,74,32,-1,32,74,75,33,-1,33,75,76,34,-1,34,76,77,35,-1,35,77,78,36,-1,36,78,79,37,-1,37,79,80,38,-1,38,80,81,39,-1,39,81,82,40,-1,40,82,83,41,-1,84,41,83,90,-1,89,0,42,95,-1],solid=False,
            coord=Coordinate(point=[(0.62265,0.0,0),(0.6218712004456791,0.0311325,0),(0.6195289277144369,0.062265,0),(0.6156053358230011,0.0933975,0),(0.6100699153375784,0.12453,0),(0.6028782701290121,0.1556625,0),(0.5939702437622613,0.186795,0),(0.5832672005554145,0.2179275,0),(0.5706681512928509,0.24906,0),(0.5560442297549271,0.2801925,0),(0.5392307176663808,0.311325,0),(0.520015272077417,0.3424575,0),(0.49812000000000006,0.37359,0),(0.47317303441103875,0.4047225,0),(0.4446610411032206,0.435855,0),(0.4118442634585919,0.4669875,0),(0.37359000000000003,0.49812,0),(0.3280012404606879,0.5292525,0),(0.2714068427195601,0.560385,0),(0.19442240018513812,0.5915175,0),(0.0,0.62265,0),(-0.0,0.62265,0),(-0.19442240018513812,0.5915175,0),(-0.2714068427195601,0.560385,0),(-0.3280012404606879,0.5292525,0),(-0.37359000000000003,0.49812,0),(-0.4118442634585919,0.4669875,0),(-0.4446610411032206,0.435855,0),(-0.47317303441103875,0.4047225,0),(-0.49812000000000006,0.37359,0),(-0.520015272077417,0.3424575,0),(-0.5392307176663808,0.311325,0),(-0.5560442297549271,0.2801925,0),(-0.5706681512928509,0.24906,0),(-0.5832672005554145,0.2179275,0),(-0.5939702437622613,0.186795,0),(-0.6028782701290121,0.1556625,0),(-0.6100699153375784,0.12453,0),(-0.6156053358230011,0.0933975,0),(-0.6195289277144369,0.062265,0),(-0.6218712004456791,0.0311325,0),(-0.62265,0.0,0),(0.62265,0.0,0.76),(0.6218712004456791,0.0311325,0.76),(0.6195289277144369,0.062265,0.76),(0.6156053358230011,0.0933975,0.76),(0.6100699153375784,0.12453,0.76),(0.6028782701290121,0.1556625,0.76),(0.5939702437622613,0.186795,0.76),(0.5832672005554145,0.2179275,0.76),(0.5706681512928509,0.24906,0.76),(0.5560442297549271,0.2801925,0.76),(0.5392307176663808,0.311325,0.76),(0.520015272077417,0.3424575,0.76),(0.49812000000000006,0.37359,0.76),(0.47317303441103875,0.4047225,0.76),(0.4446610411032206,0.435855,0.76),(0.4118442634585919,0.4669875,0.76),(0.37359000000000003,0.49812,0.76),(0.3280012404606879,0.5292525,0.76),(0.2714068427195601,0.560385,0.76),(0.19442240018513812,0.5915175,0.76),(0.0,0.62265,0.76),(-0.0,0.62265,0.76),(-0.19442240018513812,0.5915175,0.76),(-0.2714068427195601,0.560385,0.76),(-0.3280012404606879,0.5292525,0.76),(-0.37359000000000003,0.49812,0.76),(-0.4118442634585919,0.4669875,0.76),(-0.4446610411032206,0.435855,0.76),(-0.47317303441103875,0.4047225,0.76),(-0.49812000000000006,0.37359,0.76),(-0.520015272077417,0.3424575,0.76),(-0.5392307176663808,0.311325,0.76),(-0.5560442297549271,0.2801925,0.76),(-0.5706681512928509,0.24906,0.76),(-0.5832672005554145,0.2179275,0.76),(-0.5939702437622613,0.186795,0.76),(-0.6028782701290121,0.1556625,0.76),(-0.6100699153375784,0.12453,0.76),(-0.6156053358230011,0.0933975,0.76),(-0.6195289277144369,0.062265,0.76),(-0.6218712004456791,0.0311325,0.76),(-0.62265,0.0,0.76),(-0.62265,0,0),(-0.62265,0,0),(-0.62265,1.3,0),(0.62265,1.3,0),(0.62265,0,0),(0.62265,0,0),(-0.62265,0,0.76),(-0.62265,0,0.76),(-0.62265,1.3,0.76),(0.62265,1.3,0.76),(0.62265,0,0.76),(0.62265,0,0.76)])),
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.75,0.25))))]),
      Transform(DEF='Controfacciatadx',translation=(6.707,1.31,-0.0789),rotation=(1,0,0,0),
        children=[
        Shape(
          geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,-1],solid=False,
            coord=Coordinate(point=[(0,0,0),(0,4.2,0),(3,4.2,0),(3,0,0)])),
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.75,0.25))))]),
      Transform(DEF='Controfacciatasx',translation=(1.737,1.31,-0.0789),rotation=(1,0,0,0),
        children=[
        Shape(
          geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,-1],solid=False,
            coord=Coordinate(point=[(0,0,0),(0,4.2,0),(3,4.2,0),(3,0,0)])),
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.75,0.25))))]),
      Transform(DEF='FinFacciata',translation=(-2.5,-3.01,1.135),
        children=[
        Transform(DEF='TerminiFinFacciata',scale=(1,1,0.34),
          children=[
          Transform(DEF='faccestra1',translation=(13,6.01,8),rotation=(0,1,0,1.57),
            children=[
            Transform(DEF='terminixfaccSOTT',translation=(9.3699,-0.2165,-5.77),rotation=(1,0,0,1.57),
              children=[
              Shape(
                geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,3,0,4,7,-1,0,1,2,3,-1,4,5,6,7,-1],solid=False,
                  coord=Coordinate(point=[(0,0,0),(1.31,0,0),(1.31,0,-0.149),(0.89,0,-0.149),(0,1.97,0),(1.31,1.97,0),(1.31,1.97,-0.149),(0.89,1.97,-0.149)])),
                appearance=Appearance(
                  material=Material(diffuseColor=(1,0.75,0.25))))]),
            Transform(DEF='terminixfaccLAT',translation=(9.37,-0.2165,-3.8),rotation=(1,0,0,0),
              children=[
              Transform(DEF='terminexfacc1DX',
                children=[
                Shape(
                  geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,3,0,4,7,-1,0,1,2,3,-1,4,5,6,7,-1],solid=False,
                    coord=Coordinate(point=[(0,0,0),(1.31,0,0),(1.31,0,-0.149),(0.89,0,-0.149),(0,1.15,0),(1.31,1.15,0),(1.31,1.15,-0.149),(0.89,1.15,-0.149)])),
                  appearance=Appearance(
                    material=Material(diffuseColor=(1,0.75,0.25))))]),
              Transform(DEF='terminexfacc2DX',translation=(0,0,-1.97),
                children=[
                Shape(
                  geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,3,0,4,7,-1,0,1,2,3,-1,4,5,6,7,-1],solid=False,
                    coord=Coordinate(point=[(0,0,0),(1.31,0,0),(1.31,0,0.149),(0.89,0,0.149),(0,1.15,0),(1.31,1.15,0),(1.31,1.15,0.149),(0.89,1.15,0.149)])),
                  appearance=Appearance(
                    material=Material(diffuseColor=(1,0.75,0.25))))])])]),
          Transform(DEF='faccestra12',translation=(13,6.01,5.811),rotation=(0,1,0,1.57),
            children=[
            Transform(DEF='terminixfaccSOTT2',translation=(9.3699,-0.2165,-5.77),rotation=(1,0,0,1.57),
              children=[
              Shape(
                geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,3,0,4,7,-1,0,1,2,3,-1,4,5,6,7,-1],solid=False,
                  coord=Coordinate(point=[(0,0,0),(-1.31,0,0),(-1.31,0,-0.149),(-0.89,0,-0.149),(0,1.97,0),(-1.31,1.97,0),(-1.31,1.97,-0.149),(-0.89,1.97,-0.149)])),
                appearance=Appearance(
                  material=Material(diffuseColor=(1,0.75,0.25))))]),
            Transform(DEF='terminixfaccLAT2',translation=(9.37,-0.2165,-3.8),rotation=(1,0,0,0),
              children=[
              Transform(DEF='terminexfacc1DX2',
                children=[
                Shape(
                  geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,3,0,4,7,-1,0,1,2,3,-1,4,5,6,7,-1],solid=False,
                    coord=Coordinate(point=[(0,0,0),(-1.31,0,0),(-1.31,0,-0.149),(-0.89,0,-0.149),(0,1.15,0),(-1.31,1.15,0),(-1.31,1.15,-0.149),(-0.89,1.15,-0.149)])),
                  appearance=Appearance(
                    material=Material(diffuseColor=(1,0.75,0.25))))]),
              Transform(DEF='terminexfacc2DX2',translation=(0,0,-1.97),
                children=[
                Shape(
                  geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,3,0,4,7,-1,0,1,2,3,-1,4,5,6,7,-1],solid=False,
                    coord=Coordinate(point=[(0,0,0),(-1.31,0,0),(-1.31,0,0.149),(-0.89,0,0.149),(0,1.15,0),(-1.31,1.15,0),(-1.31,1.15,0.149),(-0.89,1.15,0.149)])),
                  appearance=Appearance(
                    material=Material(diffuseColor=(1,0.75,0.25))))])])])]),
        Transform(DEF='Cap',translation=(8.225,6.93,-0.765),rotation=(1,0,0,-1.57),scale=(1.34,1,0.5),
          children=[
          Transform(rotation=(0,0,1,3.14),
            children=[
            Shape(
              geometry=Extrusion(convex=False,beginCap=False,crossSection=[(0.6226500273,0),(0.6218711734,0.0311325006),(0.6195289493,0.0622650012),(0.6156053543,0.0933974981),(0.6100699306,0.1245300025),(0.6028782725,0.1556625068),(0.5939702392,0.1867949963),(0.5832672119,0.2179275006),(0.5706681609,0.2490600049),(0.5560442209,0.2801924944),(0.5392307043,0.3113250136),(0.5200152993,0.3424575031),(0.4981200099,0.3735899925),(0.4731730223,0.4047225118),(0.444661051,0.4358550012),(0.4118442535,0.4669874907),(0.3735899925,0.4981200099),(0.328001231,0.5292525291),(0.2714068294,0.5603849888),(0.194422394,0.591517508),(0,0.6226500273),(-0,0.6226500273),(-0.194422394,0.591517508),(-0.2714068294,0.5603849888),(-0.328001231,0.5292525291),(-0.3735899925,0.4981200099),(-0.4118442535,0.4669874907),(-0.444661051,0.4358550012),(-0.4731730223,0.4047225118),(-0.4981200099,0.3735899925),(-0.5200152993,0.3424575031),(-0.5392307043,0.3113250136),(-0.5560442209,0.2801924944),(-0.5706681609,0.2490600049),(-0.5832672119,0.2179275006),(-0.5939702392,0.1867949963),(-0.6028782725,0.1556625068),(-0.6100699306,0.1245300025),(-0.6156053543,0.0933974981),(-0.6195289493,0.0622650012),(-0.6218711734,0.0311325006),(-0.6226500273,0),(-0.6226500273,2.8),(0.6226500273,2.7)],scale=[(1,1),(1.2,1.2)],solid=False,spine=[(0,0,0),(0,0.3,0)]),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.75,0.25))))])]),
        Transform(DEF='Cap2',translation=(8.225,6.93,-0.915),rotation=(1,0,0,-1.57),scale=(1.34,1,0.5),
          children=[
          Transform(
            children=[
            Shape(
              geometry=Extrusion(convex=False,beginCap=False,crossSection=[(0.6226500273,0),(0.6218711734,0.0311325006),(0.6195289493,0.0622650012),(0.6156053543,0.0933974981),(0.6100699306,0.1245300025),(0.6028782725,0.1556625068),(0.5939702392,0.1867949963),(0.5832672119,0.2179275006),(0.5706681609,0.2490600049),(0.5560442209,0.2801924944),(0.5392307043,0.3113250136),(0.5200152993,0.3424575031),(0.4981200099,0.3735899925),(0.4731730223,0.4047225118),(0.444661051,0.4358550012),(0.4118442535,0.4669874907),(0.3735899925,0.4981200099),(0.328001231,0.5292525291),(0.2714068294,0.5603849888),(0.194422394,0.591517508),(0,0.6226500273),(-0,0.6226500273),(-0.194422394,0.591517508),(-0.2714068294,0.5603849888),(-0.328001231,0.5292525291),(-0.3735899925,0.4981200099),(-0.4118442535,0.4669874907),(-0.444661051,0.4358550012),(-0.4731730223,0.4047225118),(-0.4981200099,0.3735899925),(-0.5200152993,0.3424575031),(-0.5392307043,0.3113250136),(-0.5560442209,0.2801924944),(-0.5706681609,0.2490600049),(-0.5832672119,0.2179275006),(-0.5939702392,0.1867949963),(-0.6028782725,0.1556625068),(-0.6100699306,0.1245300025),(-0.6156053543,0.0933974981),(-0.6195289493,0.0622650012),(-0.6218711734,0.0311325006),(-0.6226500273,0),(-0.6226500273,2.7),(0.6226500273,2.7)],scale=[(1,1),(1.2,1.2)],solid=False,spine=[(0,0,0),(0,0.3,0)]),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.75,0.25))))])]),
        Transform(DEF='Cap3',translation=(8.225,6.93,-0.913),rotation=(1,0,0,0),scale=(1.34,0.5,0.84),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,84,85,86,87,88,89,-1,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,90,91,92,93,94,95,-1,0,42,43,1,-1,1,43,44,2,-1,2,44,45,3,-1,3,45,46,4,-1,4,46,47,5,-1,5,47,48,6,-1,6,48,49,7,-1,7,49,50,8,-1,8,50,51,9,-1,9,51,52,10,-1,10,52,53,11,-1,11,53,54,12,-1,12,54,55,13,-1,13,55,56,14,-1,14,56,57,15,-1,15,57,58,16,-1,16,58,59,17,-1,17,59,60,18,-1,18,60,61,19,-1,19,61,62,20,-1,20,62,63,21,-1,21,63,64,22,-1,22,64,65,23,-1,23,65,66,24,-1,24,66,67,25,-1,25,67,68,26,-1,26,68,69,27,-1,27,69,70,28,-1,28,70,71,29,-1,29,71,72,30,-1,30,72,73,31,-1,31,73,74,32,-1,32,74,75,33,-1,33,75,76,34,-1,34,76,77,35,-1,35,77,78,36,-1,36,78,79,37,-1,37,79,80,38,-1,38,80,81,39,-1,39,81,82,40,-1,40,82,83,41,-1,84,41,83,90,-1,89,0,42,95,-1],solid=False,
              coord=Coordinate(point=[(0.62265,0.0,0),(0.6218712004456791,0.0311325,0),(0.6195289277144369,0.062265,0),(0.6156053358230011,0.0933975,0),(0.6100699153375784,0.12453,0),(0.6028782701290121,0.1556625,0),(0.5939702437622613,0.186795,0),(0.5832672005554145,0.2179275,0),(0.5706681512928509,0.24906,0),(0.5560442297549271,0.2801925,0),(0.5392307176663808,0.311325,0),(0.520015272077417,0.3424575,0),(0.49812000000000006,0.37359,0),(0.47317303441103875,0.4047225,0),(0.4446610411032206,0.435855,0),(0.4118442634585919,0.4669875,0),(0.37359000000000003,0.49812,0),(0.3280012404606879,0.5292525,0),(0.2714068427195601,0.560385,0),(0.19442240018513812,0.5915175,0),(0.0,0.62265,0),(-0.0,0.62265,0),(-0.19442240018513812,0.5915175,0),(-0.2714068427195601,0.560385,0),(-0.3280012404606879,0.5292525,0),(-0.37359000000000003,0.49812,0),(-0.4118442634585919,0.4669875,0),(-0.4446610411032206,0.435855,0),(-0.47317303441103875,0.4047225,0),(-0.49812000000000006,0.37359,0),(-0.520015272077417,0.3424575,0),(-0.5392307176663808,0.311325,0),(-0.5560442297549271,0.2801925,0),(-0.5706681512928509,0.24906,0),(-0.5832672005554145,0.2179275,0),(-0.5939702437622613,0.186795,0),(-0.6028782701290121,0.1556625,0),(-0.6100699153375784,0.12453,0),(-0.6156053358230011,0.0933975,0),(-0.6195289277144369,0.062265,0),(-0.6218712004456791,0.0311325,0),(-0.62265,0.0,0),(0.62265,0.0,0.18),(0.6218712004456791,0.0311325,0.18),(0.6195289277144369,0.062265,0.18),(0.6156053358230011,0.0933975,0.18),(0.6100699153375784,0.12453,0.18),(0.6028782701290121,0.1556625,0.18),(0.5939702437622613,0.186795,0.18),(0.5832672005554145,0.2179275,0.18),(0.5706681512928509,0.24906,0.18),(0.5560442297549271,0.2801925,0.18),(0.5392307176663808,0.311325,0.18),(0.520015272077417,0.3424575,0.18),(0.49812000000000006,0.37359,0.18),(0.47317303441103875,0.4047225,0.18),(0.4446610411032206,0.435855,0.18),(0.4118442634585919,0.4669875,0.18),(0.37359000000000003,0.49812,0.18),(0.3280012404606879,0.5292525,0.18),(0.2714068427195601,0.560385,0.18),(0.19442240018513812,0.5915175,0.18),(0.0,0.62265,0.18),(-0.0,0.62265,0.18),(-0.19442240018513812,0.5915175,0.18),(-0.2714068427195601,0.560385,0.18),(-0.3280012404606879,0.5292525,0.18),(-0.37359000000000003,0.49812,0.18),(-0.4118442634585919,0.4669875,0.18),(-0.4446610411032206,0.435855,0.18),(-0.47317303441103875,0.4047225,0.18),(-0.49812000000000006,0.37359,0.18),(-0.520015272077417,0.3424575,0.18),(-0.5392307176663808,0.311325,0.18),(-0.5560442297549271,0.2801925,0.18),(-0.5706681512928509,0.24906,0.18),(-0.5832672005554145,0.2179275,0.18),(-0.5939702437622613,0.186795,0.18),(-0.6028782701290121,0.1556625,0.18),(-0.6100699153375784,0.12453,0.18),(-0.6156053358230011,0.0933975,0.18),(-0.6195289277144369,0.062265,0.18),(-0.6218712004456791,0.0311325,0.18),(-0.62265,0.0,0.18),(-0.62265,0,0),(-0.62265,0,0),(-0.62265,1.56,0),(0.62265,1.56,0),(0.62265,0,0),(0.62265,0,0),(-0.62265,0,0.18),(-0.62265,0,0.18),(-0.62265,1.56,0.18),(0.62265,1.56,0.18),(0.62265,0,0.18),(0.62265,0,0.18)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))])]),
      #  Enter any text between the end tags 

    
    
    
    
    <Transform DEF="CurvaFacciata1" translation='5 7 -1.97' rotation="0 1 0 0" scale="0.7 0.3 1">
          <Shape>
                <IndexedFaceSet convex='false' coordIndex='   0 1 2 3   4  5 6 7  8 9 10 11      12 13   14  15 16 17  18 19 20 21 22 23        -1       ' solid='false'>
                    <Coordinate point=' 0 3.2782 0    -0.2392 3.3582 0              -0.4467 3.3782  0                        -0.6595   3.3782 0                        -0.9  3.4163  0           -1.117   3.5106 0        -1.3 3.5811 0           -1.5159 3.7234 0             -1.74 3.8989 0       -1.821 4.0425 0                 -1.94  4.191 0                                                                        -2 -5  0     0 -5 0                                ' />
                </IndexedFaceSet>
            <Appearance>
              <Material diffuseColor='1 0.75 0.25'/>
            </Appearance>
          </Shape>
    </Transform>
    
    
   
    
    <Transform DEF="CurvaFacciata2" translation='6.35 4.2pa -1.97' rotation="0 1 0 0" scale="1.3 0.9 1">
          <Shape>
                <IndexedFaceSet convex='false' coordIndex='   0 1 2 3   4  5 6 7  8 9 10 11      12 13   14  15 16 17  18 19 20 21 22               -1       ' solid='false'>
                    <Coordinate point='  -2.07 4.46 0      -2.23 4.7498 0                                                           -2.4335 5.2127 0                                                                          -2.63 5.4229  0    -2.77 5.6 0        -2.95 5.815 0        -3.1 6  0       -3.19 6.1 0          -3.3936  6.23400116  0          -3.5 6.2611  0         -3.5 -5  0     -2.23 -5 0                                ' />
                </IndexedFaceSet>
            <Appearance>
              <Material diffuseColor='1 0.75 0.25'/>
            </Appearance>
          </Shape>
    </Transform>
    
    
    
    <Transform DEF="CurvaFacciata" translation='5 7 -1.97' rotation="1 0 0 -1.57">
         
            

 
      <Shape>
      <Extrusion beginCap='false' crossSection='0 3.3782                 -0.2392 3.3782 -0.4467 3.3782   -0.6595   3.3782         -0.8999999762 3.4263000488 -1.1169999838 3.51060009 -1.2999999523 3.581099987 -1.5159000158 3.723400116 -1.7400000095 3.898900032 -1.82099998 4.0425000191                  -1.9400000572 4.1909999847           -2.0699999332 4.4600000381 -2.2300000191 4.7498002052      -2.4335000515 5.2126998901 -2.6300001144 5.4229001999 -2.7699999809 5.5999999046 -2.9500000477 5.7150001526 -2.9574000835 5.9307999611 -3.1900000572 5.9816999435 -3.393599987 6.223400116 -3.5 6.2610998154' endCap='true' orientation='0 0 1 0' solid='false' spine='0 0 0 0 4 0'/>

         <Appearance>
              <Material diffuseColor='1 0.75 0.25'/>
            </Appearance>
      </Shape>
    
      
 
        </Transform>
    
      Transform(DEF='Cornicione',translation=(6.2,5.45,0.41),rotation=(0,0,0,0),scale=(1.2,1.2,1),
        children=[
        Transform(DEF='cornicione1',translation=(-0.3,0,0),rotation=(0,0,0,0),scale=(1,1,1),
          children=[
          Transform(DEF='1',translation=(-1.55,1.3,0),rotation=(0,0,1,1.14),scale=(2.6,1.2,1),
            children=[
            Shape(
              geometry=IndexedFaceSet(convex=False,coordIndex=[8,50,51,9,-1,9,51,52,10,-1,10,52,53,11,-1,11,53,54,12,-1,12,54,55,13,-1,13,55,56,14,-1,14,56,57,15,-1,15,57,58,16,-1,16,58,59,17,-1,17,59,60,18,-1,18,60,61,19,-1,19,61,62,20,-1,20,62,63,21,-1,21,63,64,22,-1,22,64,65,23,-1,23,65,66,24,-1,84,41,83,90,-1,89,0,42,95,-1],solid=False,
                coord=Coordinate(point=[(0.62265,0.0,0),(0.6218712004456791,0.0311325,0),(0.6195289277144369,0.062265,0),(0.6156053358230011,0.0933975,0),(0.6100699153375784,0.12453,0),(0.6028782701290121,0.1556625,0),(0.5939702437622613,0.186795,0),(0.5832672005554145,0.2179275,0),(0.5706681512928509,0.24906,0),(0.5560442297549271,0.2801925,0),(0.5392307176663808,0.311325,0),(0.520015272077417,0.3424575,0),(0.49812000000000006,0.37359,0),(0.47317303441103875,0.4047225,0),(0.4446610411032206,0.435855,0),(0.4118442634585919,0.4669875,0),(0.37359000000000003,0.49812,0),(0.3280012404606879,0.5292525,0),(0.2714068427195601,0.560385,0),(0.19442240018513812,0.5915175,0),(0.0,0.62265,0),(-0.0,0.62265,0),(-0.19442240018513812,0.5915175,0),(-0.2714068427195601,0.560385,0),(-0.3280012404606879,0.5292525,0),(-0.37359000000000003,0.49812,0),(-0.4118442634585919,0.4669875,0),(-0.4446610411032206,0.435855,0),(-0.47317303441103875,0.4047225,0),(-0.49812000000000006,0.37359,0),(-0.520015272077417,0.3424575,0),(-0.5392307176663808,0.311325,0),(-0.5560442297549271,0.2801925,0),(-0.5706681512928509,0.24906,0),(-0.5832672005554145,0.2179275,0),(-0.5939702437622613,0.186795,0),(-0.6028782701290121,0.1556625,0),(-0.6100699153375784,0.12453,0),(-0.6156053358230011,0.0933975,0),(-0.6195289277144369,0.062265,0),(-0.6218712004456791,0.0311325,0),(-0.62265,0.0,0),(0.62265,0.0,0.30),(0.6218712004456791,0.0311325,0.30),(0.6195289277144369,0.062265,0.30),(0.6156053358230011,0.0933975,0.30),(0.6100699153375784,0.12453,0.30),(0.6028782701290121,0.1556625,0.30),(0.5939702437622613,0.186795,0.30),(0.5832672005554145,0.2179275,0.30),(0.5706681512928509,0.24906,0.30),(0.5560442297549271,0.2801925,0.30),(0.5392307176663808,0.311325,0.30),(0.520015272077417,0.3424575,0.30),(0.49812000000000006,0.37359,0.30),(0.47317303441103875,0.4047225,0.30),(0.4446610411032206,0.435855,0.30),(0.4118442634585919,0.4669875,0.30),(0.37359000000000003,0.49812,0.30),(0.3280012404606879,0.5292525,0.30),(0.2714068427195601,0.560385,0.30),(0.19442240018513812,0.5915175,0.30),(0.0,0.62265,0.30),(-0.0,0.62265,0.30),(-0.19442240018513812,0.5915175,0.30),(-0.2714068427195601,0.560385,0.30),(-0.3280012404606879,0.5292525,0.30),(-0.37359000000000003,0.49812,0.30),(-0.4118442634585919,0.4669875,0.30),(-0.4446610411032206,0.435855,0.30),(-0.47317303441103875,0.4047225,0.30),(-0.49812000000000006,0.37359,0.30),(-0.520015272077417,0.3424575,0.30),(-0.5392307176663808,0.311325,0.30),(-0.5560442297549271,0.2801925,0.30),(-0.5706681512928509,0.24906,0.30),(-0.5832672005554145,0.2179275,0.30),(-0.5939702437622613,0.186795,0.30),(-0.6028782701290121,0.1556625,0.30),(-0.6100699153375784,0.12453,0.30),(-0.6156053358230011,0.0933975,0.30),(-0.6195289277144369,0.062265,0.30),(-0.6218712004456791,0.0311325,0.30),(-0.62265,0.0,0.30),(-0.62265,0,0),(-0.62265,0,0),(-0.62265,0,0),(0.62265,0,0),(0.62265,0,0),(0.62265,0,0),(-0.62265,0,0.30),(-0.62265,0,0.30),(-0.62265,0,0.30),(0.62265,0,0.30),(0.62265,0,0.30),(0.62265,0,0.30)])),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.75,0.25))))]),
          Transform(DEF='1bis',translation=(-1.35,1.27,0),rotation=(0,0,1,1.14),scale=(2.6,1.2,1),
            children=[
            Shape(
              geometry=IndexedFaceSet(convex=False,coordIndex=[12,54,55,13,-1,13,55,56,14,-1,14,56,57,15,-1,15,57,58,16,-1,16,58,59,17,-1,17,59,60,18,-1,18,60,61,19,-1,19,61,62,20,-1,20,62,63,21,-1,21,63,64,22,-1,22,64,65,23,-1,84,41,83,90,-1,89,0,42,95,-1],solid=False,
                coord=Coordinate(point=[(0.62265,0.0,0),(0.6218712004456791,0.0311325,0),(0.6195289277144369,0.062265,0),(0.6156053358230011,0.0933975,0),(0.6100699153375784,0.12453,0),(0.6028782701290121,0.1556625,0),(0.5939702437622613,0.186795,0),(0.5832672005554145,0.2179275,0),(0.5706681512928509,0.24906,0),(0.5560442297549271,0.2801925,0),(0.5392307176663808,0.311325,0),(0.520015272077417,0.3424575,0),(0.49812000000000006,0.37359,0),(0.47317303441103875,0.4047225,0),(0.4446610411032206,0.435855,0),(0.4118442634585919,0.4669875,0),(0.37359000000000003,0.49812,0),(0.3280012404606879,0.5292525,0),(0.2714068427195601,0.560385,0),(0.19442240018513812,0.5915175,0),(0.0,0.62265,0),(-0.0,0.62265,0),(-0.19442240018513812,0.5915175,0),(-0.2714068427195601,0.560385,0),(-0.3280012404606879,0.5292525,0),(-0.37359000000000003,0.49812,0),(-0.4118442634585919,0.4669875,0),(-0.4446610411032206,0.435855,0),(-0.47317303441103875,0.4047225,0),(-0.49812000000000006,0.37359,0),(-0.520015272077417,0.3424575,0),(-0.5392307176663808,0.311325,0),(-0.5560442297549271,0.2801925,0),(-0.5706681512928509,0.24906,0),(-0.5832672005554145,0.2179275,0),(-0.5939702437622613,0.186795,0),(-0.6028782701290121,0.1556625,0),(-0.6100699153375784,0.12453,0),(-0.6156053358230011,0.0933975,0),(-0.6195289277144369,0.062265,0),(-0.6218712004456791,0.0311325,0),(-0.62265,0.0,0),(0.62265,0.0,0.30),(0.6218712004456791,0.0311325,0.30),(0.6195289277144369,0.062265,0.30),(0.6156053358230011,0.0933975,0.30),(0.6100699153375784,0.12453,0.30),(0.6028782701290121,0.1556625,0.30),(0.5939702437622613,0.186795,0.30),(0.5832672005554145,0.2179275,0.30),(0.5706681512928509,0.24906,0.30),(0.5560442297549271,0.2801925,0.30),(0.5392307176663808,0.311325,0.30),(0.520015272077417,0.3424575,0.30),(0.49812000000000006,0.37359,0.30),(0.47317303441103875,0.4047225,0.30),(0.4446610411032206,0.435855,0.30),(0.4118442634585919,0.4669875,0.30),(0.37359000000000003,0.49812,0.30),(0.3280012404606879,0.5292525,0.30),(0.2714068427195601,0.560385,0.30),(0.19442240018513812,0.5915175,0.30),(0.0,0.62265,0.30),(-0.0,0.62265,0.30),(-0.19442240018513812,0.5915175,0.30),(-0.2714068427195601,0.560385,0.30),(-0.3280012404606879,0.5292525,0.30),(-0.37359000000000003,0.49812,0.30),(-0.4118442634585919,0.4669875,0.30),(-0.4446610411032206,0.435855,0.30),(-0.47317303441103875,0.4047225,0.30),(-0.49812000000000006,0.37359,0.30),(-0.520015272077417,0.3424575,0.30),(-0.5392307176663808,0.311325,0.30),(-0.5560442297549271,0.2801925,0.30),(-0.5706681512928509,0.24906,0.30),(-0.5832672005554145,0.2179275,0.30),(-0.5939702437622613,0.186795,0.30),(-0.6028782701290121,0.1556625,0.30),(-0.6100699153375784,0.12453,0.30),(-0.6156053358230011,0.0933975,0.30),(-0.6195289277144369,0.062265,0.30),(-0.6218712004456791,0.0311325,0.30),(-0.62265,0.0,0.30),(-0.62265,0,0),(-0.62265,0,0),(-0.62265,0,0),(0.62265,0,0),(0.62265,0,0),(0.62265,0,0),(-0.62265,0,0.30),(-0.62265,0,0.30),(-0.62265,0,0.30),(0.62265,0,0.30),(0.62265,0,0.30),(0.62265,0,0.30)])),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.75,0.25))))]),
          Transform(DEF='box1',translation=(-2.4,0.8,0.3),
            children=[
            Shape(
              geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,38,37,-1,35,36,73,72,-1,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,-1,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,-1],creaseAngle=0.1745,solid=False,
                coord=Coordinate(point=[(-1.8,-0.66,0),(-1.05,-0.64,0),(-0.9,-0.61,0),(-0.6,-0.48,0),(-0.315,-0.25,0),(-0.16,-0.08,0),(-0.07,0.08,0),(0,0.355,0),(0.09,0.57,0),(0.16,0.77,0),(0.26,0.97,0),(0.37,1.17,0),(0.495,1.37,0),(0.66,1.57,0),(0.86,1.77,0),(0.995,1.87,0),(1.12,1.94,0),(1.19,1.94,0),(1.19,1.86,0),(0.98,1.67,0),(0.781,1.47,0),(0.715,1.37,0),(0.58,1.17,0),(0.52,1.07,0),(0.42,0.87,0),(0.36,0.76,0),(0.164,0.22,0),(0.166,0.2,0),(0.097,0,0),(-0.02,-0.2,0),(-0.17,-0.38,0),(-0.3,-0.49,0),(-0.6,-0.67,0),(-0.75,-0.72,0),(-0.95,-0.79,0),(-1.05,-0.81,0),(-1.8,-0.83,0),(-1.8,-0.66,-0.30),(-1.05,-0.64,-0.30),(-0.9,-0.61,-0.30),(-0.6,-0.48,-0.30),(-0.315,-0.25,-0.30),(-0.16,-0.08,-0.30),(-0.07,0.08,-0.30),(0,0.355,-0.30),(0.09,0.57,-0.30),(0.16,0.77,-0.30),(0.26,0.97,-0.30),(0.37,1.17,-0.30),(0.495,1.37,-0.30),(0.66,1.57,-0.30),(0.86,1.77,-0.30),(0.995,1.87,-0.30),(1.12,1.94,-0.30),(1.19,1.94,-0.30),(1.19,1.86,-0.30),(0.98,1.67,-0.30),(0.781,1.47,-0.30),(0.715,1.37,-0.30),(0.58,1.17,-0.30),(0.52,1.07,-0.30),(0.42,0.87,-0.30),(0.36,0.76,-0.30),(0.164,0.22,-0.30),(0.166,0.2,-0.30),(0.097,0,-0.30),(-0.02,-0.2,-0.30),(-0.17,-0.38,-0.30),(-0.3,-0.49,-0.30),(-0.6,-0.67,-0.30),(-0.75,-0.72,-0.30),(-0.95,-0.79,-0.30),(-1.05,-0.81,-0.30),(-1.8,-0.83,-0.30)])),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.75,0.25))))]),
          Transform(DEF='cil',translation=(-1.13,2.625,0.15),rotation=(1,0,0,1.57),
            children=[
            Shape(
              geometry=Cylinder(height=0.3,radius=0.17),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.75,0.25))))]),
          Transform(DEF='2',translation=(-3.45,1.11,0),rotation=(0,0,1,-2.6),scale=(1.8,1.45,1),
            children=[
            Shape(
              geometry=IndexedFaceSet(convex=False,coordIndex=[18,60,61,19,-1,19,61,62,20,-1,20,62,63,21,-1,21,63,64,22,-1,22,64,65,23,-1,23,65,66,24,-1,24,66,67,25,-1,25,67,68,26,-1,26,68,69,27,-1,27,69,70,28,-1,28,70,71,29,-1,29,71,72,30,-1,84,41,83,90,-1,89,0,42,95,-1],solid=False,
                coord=Coordinate(point=[(0.62265,0.0,0),(0.6218712004456791,0.0311325,0),(0.6195289277144369,0.062265,0),(0.6156053358230011,0.0933975,0),(0.6100699153375784,0.12453,0),(0.6028782701290121,0.1556625,0),(0.5939702437622613,0.186795,0),(0.5832672005554145,0.2179275,0),(0.5706681512928509,0.24906,0),(0.5560442297549271,0.2801925,0),(0.5392307176663808,0.311325,0),(0.520015272077417,0.3424575,0),(0.49812000000000006,0.37359,0),(0.47317303441103875,0.4047225,0),(0.4446610411032206,0.435855,0),(0.4118442634585919,0.4669875,0),(0.37359000000000003,0.49812,0),(0.3280012404606879,0.5292525,0),(0.2714068427195601,0.560385,0),(0.19442240018513812,0.5915175,0),(0.0,0.62265,0),(-0.0,0.62265,0),(-0.19442240018513812,0.5915175,0),(-0.2714068427195601,0.560385,0),(-0.3280012404606879,0.5292525,0),(-0.37359000000000003,0.49812,0),(-0.4118442634585919,0.4669875,0),(-0.4446610411032206,0.435855,0),(-0.47317303441103875,0.4047225,0),(-0.49812000000000006,0.37359,0),(-0.520015272077417,0.3424575,0),(-0.5392307176663808,0.311325,0),(-0.5560442297549271,0.2801925,0),(-0.5706681512928509,0.24906,0),(-0.5832672005554145,0.2179275,0),(-0.5939702437622613,0.186795,0),(-0.6028782701290121,0.1556625,0),(-0.6100699153375784,0.12453,0),(-0.6156053358230011,0.0933975,0),(-0.6195289277144369,0.062265,0),(-0.6218712004456791,0.0311325,0),(-0.62265,0.0,0),(0.62265,0.0,0.30),(0.6218712004456791,0.0311325,0.30),(0.6195289277144369,0.062265,0.30),(0.6156053358230011,0.0933975,0.30),(0.6100699153375784,0.12453,0.30),(0.6028782701290121,0.1556625,0.30),(0.5939702437622613,0.186795,0.30),(0.5832672005554145,0.2179275,0.30),(0.5706681512928509,0.24906,0.30),(0.5560442297549271,0.2801925,0.30),(0.5392307176663808,0.311325,0.30),(0.520015272077417,0.3424575,0.30),(0.49812000000000006,0.37359,0.30),(0.47317303441103875,0.4047225,0.30),(0.4446610411032206,0.435855,0.30),(0.4118442634585919,0.4669875,0.30),(0.37359000000000003,0.49812,0.30),(0.3280012404606879,0.5292525,0.30),(0.2714068427195601,0.560385,0.30),(0.19442240018513812,0.5915175,0.30),(0.0,0.62265,0.30),(-0.0,0.62265,0.30),(-0.19442240018513812,0.5915175,0.30),(-0.2714068427195601,0.560385,0.30),(-0.3280012404606879,0.5292525,0.30),(-0.37359000000000003,0.49812,0.30),(-0.4118442634585919,0.4669875,0.30),(-0.4446610411032206,0.435855,0.30),(-0.47317303441103875,0.4047225,0.30),(-0.49812000000000006,0.37359,0.30),(-0.520015272077417,0.3424575,0.30),(-0.5392307176663808,0.311325,0.30),(-0.5560442297549271,0.2801925,0.30),(-0.5706681512928509,0.24906,0.30),(-0.5832672005554145,0.2179275,0.30),(-0.5939702437622613,0.186795,0.30),(-0.6028782701290121,0.1556625,0.30),(-0.6100699153375784,0.12453,0.30),(-0.6156053358230011,0.0933975,0.30),(-0.6195289277144369,0.062265,0.30),(-0.6218712004456791,0.0311325,0.30),(-0.62265,0.0,0.30),(-0.62265,0,0),(-0.62265,0,0),(-0.62265,1,0),(0.62265,1,0),(0.62265,0,0),(0.62265,0,0),(-0.62265,0,0.30),(-0.62265,0,0.30),(-0.62265,1,0.30),(0.62265,1,0.30),(0.62265,0,0.30),(0.62265,0,0.30)])),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.75,0.25))))]),
          Transform(DEF='2bis',translation=(-3.36,0.92,0),rotation=(0,0,1,-2.7),scale=(1.9,1.4,1),
            children=[
            Shape(
              geometry=IndexedFaceSet(convex=False,coordIndex=[18,60,61,19,-1,19,61,62,20,-1,20,62,63,21,-1,21,63,64,22,-1,22,64,65,23,-1,23,65,66,24,-1,24,66,67,25,-1,25,67,68,26,-1,26,68,69,27,-1,27,69,70,28,-1,28,70,71,29,-1,29,71,72,30,-1,30,72,73,31,-1,31,73,74,32,-1,32,74,75,33,-1,33,75,76,34,-1,34,76,77,35,-1,84,41,83,90,-1,89,0,42,95,-1],solid=False,
                coord=Coordinate(point=[(0.62265,0.0,0),(0.6218712004456791,0.0311325,0),(0.6195289277144369,0.062265,0),(0.6156053358230011,0.0933975,0),(0.6100699153375784,0.12453,0),(0.6028782701290121,0.1556625,0),(0.5939702437622613,0.186795,0),(0.5832672005554145,0.2179275,0),(0.5706681512928509,0.24906,0),(0.5560442297549271,0.2801925,0),(0.5392307176663808,0.311325,0),(0.520015272077417,0.3424575,0),(0.49812000000000006,0.37359,0),(0.47317303441103875,0.4047225,0),(0.4446610411032206,0.435855,0),(0.4118442634585919,0.4669875,0),(0.37359000000000003,0.49812,0),(0.3280012404606879,0.5292525,0),(0.2714068427195601,0.560385,0),(0.19442240018513812,0.5915175,0),(0.0,0.62265,0),(-0.0,0.62265,0),(-0.19442240018513812,0.5915175,0),(-0.2714068427195601,0.560385,0),(-0.3280012404606879,0.5292525,0),(-0.37359000000000003,0.49812,0),(-0.4118442634585919,0.4669875,0),(-0.4446610411032206,0.435855,0),(-0.47317303441103875,0.4047225,0),(-0.49812000000000006,0.37359,0),(-0.520015272077417,0.3424575,0),(-0.5392307176663808,0.311325,0),(-0.5560442297549271,0.2801925,0),(-0.5706681512928509,0.24906,0),(-0.5832672005554145,0.2179275,0),(-0.5939702437622613,0.186795,0),(-0.6028782701290121,0.1556625,0),(-0.6100699153375784,0.12453,0),(-0.6156053358230011,0.0933975,0),(-0.6195289277144369,0.062265,0),(-0.6218712004456791,0.0311325,0),(-0.62265,0.0,0),(0.62265,0.0,0.30),(0.6218712004456791,0.0311325,0.30),(0.6195289277144369,0.062265,0.30),(0.6156053358230011,0.0933975,0.30),(0.6100699153375784,0.12453,0.30),(0.6028782701290121,0.1556625,0.30),(0.5939702437622613,0.186795,0.30),(0.5832672005554145,0.2179275,0.30),(0.5706681512928509,0.24906,0.30),(0.5560442297549271,0.2801925,0.30),(0.5392307176663808,0.311325,0.30),(0.520015272077417,0.3424575,0.30),(0.49812000000000006,0.37359,0.30),(0.47317303441103875,0.4047225,0.30),(0.4446610411032206,0.435855,0.30),(0.4118442634585919,0.4669875,0.30),(0.37359000000000003,0.49812,0.30),(0.3280012404606879,0.5292525,0.30),(0.2714068427195601,0.560385,0.30),(0.19442240018513812,0.5915175,0.30),(0.0,0.62265,0.30),(-0.0,0.62265,0.30),(-0.19442240018513812,0.5915175,0.30),(-0.2714068427195601,0.560385,0.30),(-0.3280012404606879,0.5292525,0.30),(-0.37359000000000003,0.49812,0.30),(-0.4118442634585919,0.4669875,0.30),(-0.4446610411032206,0.435855,0.30),(-0.47317303441103875,0.4047225,0.30),(-0.49812000000000006,0.37359,0.30),(-0.520015272077417,0.3424575,0.30),(-0.5392307176663808,0.311325,0.30),(-0.5560442297549271,0.2801925,0.30),(-0.5706681512928509,0.24906,0.30),(-0.5832672005554145,0.2179275,0.30),(-0.5939702437622613,0.186795,0.30),(-0.6028782701290121,0.1556625,0.30),(-0.6100699153375784,0.12453,0.30),(-0.6156053358230011,0.0933975,0.30),(-0.6195289277144369,0.062265,0.30),(-0.6218712004456791,0.0311325,0.30),(-0.62265,0.0,0.30),(-0.62265,0,0),(-0.62265,0,0),(-0.62265,1,0),(0.62265,1,0),(0.62265,0,0),(0.62265,0,0),(-0.62265,0,0.30),(-0.62265,0,0.30),(-0.62265,1,0.30),(0.62265,1,0.30),(0.62265,0,0.30),(0.62265,0,0.30)])),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.75,0.25))))])]),
        #  Enter any text between the end tags 
    
    
     <Transform  DEF="TramezzoIngresso" translation='-0.09 0 -0.1' rotation="0 0 0 0" scale="0.2 0.2 1">
        <Shape>
          <Box size=' 44.6 33.3  0.22'/>
         <Appearance>
          <ImageTexture url='3.jpg'/>
       
        </Appearance>
        </Shape>
      </Transform>
     
        Transform(DEF='cornicione2',translation=(-0.51,0,0.3),rotation=(0,1,0,3.14),scale=(1,1,1),
          children=[
          Transform(DEF='1c',translation=(-1.55,1.3,0),rotation=(0,0,1,1.14),scale=(2.6,1.2,1),
            children=[
            Shape(
              geometry=IndexedFaceSet(convex=False,coordIndex=[8,50,51,9,-1,9,51,52,10,-1,10,52,53,11,-1,11,53,54,12,-1,12,54,55,13,-1,13,55,56,14,-1,14,56,57,15,-1,15,57,58,16,-1,16,58,59,17,-1,17,59,60,18,-1,18,60,61,19,-1,19,61,62,20,-1,20,62,63,21,-1,21,63,64,22,-1,22,64,65,23,-1,23,65,66,24,-1,84,41,83,90,-1,89,0,42,95,-1],solid=False,
                coord=Coordinate(point=[(0.62265,0.0,0),(0.6218712004456791,0.0311325,0),(0.6195289277144369,0.062265,0),(0.6156053358230011,0.0933975,0),(0.6100699153375784,0.12453,0),(0.6028782701290121,0.1556625,0),(0.5939702437622613,0.186795,0),(0.5832672005554145,0.2179275,0),(0.5706681512928509,0.24906,0),(0.5560442297549271,0.2801925,0),(0.5392307176663808,0.311325,0),(0.520015272077417,0.3424575,0),(0.49812000000000006,0.37359,0),(0.47317303441103875,0.4047225,0),(0.4446610411032206,0.435855,0),(0.4118442634585919,0.4669875,0),(0.37359000000000003,0.49812,0),(0.3280012404606879,0.5292525,0),(0.2714068427195601,0.560385,0),(0.19442240018513812,0.5915175,0),(0.0,0.62265,0),(-0.0,0.62265,0),(-0.19442240018513812,0.5915175,0),(-0.2714068427195601,0.560385,0),(-0.3280012404606879,0.5292525,0),(-0.37359000000000003,0.49812,0),(-0.4118442634585919,0.4669875,0),(-0.4446610411032206,0.435855,0),(-0.47317303441103875,0.4047225,0),(-0.49812000000000006,0.37359,0),(-0.520015272077417,0.3424575,0),(-0.5392307176663808,0.311325,0),(-0.5560442297549271,0.2801925,0),(-0.5706681512928509,0.24906,0),(-0.5832672005554145,0.2179275,0),(-0.5939702437622613,0.186795,0),(-0.6028782701290121,0.1556625,0),(-0.6100699153375784,0.12453,0),(-0.6156053358230011,0.0933975,0),(-0.6195289277144369,0.062265,0),(-0.6218712004456791,0.0311325,0),(-0.62265,0.0,0),(0.62265,0.0,0.30),(0.6218712004456791,0.0311325,0.30),(0.6195289277144369,0.062265,0.30),(0.6156053358230011,0.0933975,0.30),(0.6100699153375784,0.12453,0.30),(0.6028782701290121,0.1556625,0.30),(0.5939702437622613,0.186795,0.30),(0.5832672005554145,0.2179275,0.30),(0.5706681512928509,0.24906,0.30),(0.5560442297549271,0.2801925,0.30),(0.5392307176663808,0.311325,0.30),(0.520015272077417,0.3424575,0.30),(0.49812000000000006,0.37359,0.30),(0.47317303441103875,0.4047225,0.30),(0.4446610411032206,0.435855,0.30),(0.4118442634585919,0.4669875,0.30),(0.37359000000000003,0.49812,0.30),(0.3280012404606879,0.5292525,0.30),(0.2714068427195601,0.560385,0.30),(0.19442240018513812,0.5915175,0.30),(0.0,0.62265,0.30),(-0.0,0.62265,0.30),(-0.19442240018513812,0.5915175,0.30),(-0.2714068427195601,0.560385,0.30),(-0.3280012404606879,0.5292525,0.30),(-0.37359000000000003,0.49812,0.30),(-0.4118442634585919,0.4669875,0.30),(-0.4446610411032206,0.435855,0.30),(-0.47317303441103875,0.4047225,0.30),(-0.49812000000000006,0.37359,0.30),(-0.520015272077417,0.3424575,0.30),(-0.5392307176663808,0.311325,0.30),(-0.5560442297549271,0.2801925,0.30),(-0.5706681512928509,0.24906,0.30),(-0.5832672005554145,0.2179275,0.30),(-0.5939702437622613,0.186795,0.30),(-0.6028782701290121,0.1556625,0.30),(-0.6100699153375784,0.12453,0.30),(-0.6156053358230011,0.0933975,0.30),(-0.6195289277144369,0.062265,0.30),(-0.6218712004456791,0.0311325,0.30),(-0.62265,0.0,0.30),(-0.62265,0,0),(-0.62265,0,0),(-0.62265,0,0),(0.62265,0,0),(0.62265,0,0),(0.62265,0,0),(-0.62265,0,0.30),(-0.62265,0,0.30),(-0.62265,0,0.30),(0.62265,0,0.30),(0.62265,0,0.30),(0.62265,0,0.30)])),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.75,0.25))))]),
          Transform(DEF='1bisc',translation=(-1.35,1.27,0),rotation=(0,0,1,1.14),scale=(2.6,1.2,1),
            children=[
            Shape(
              geometry=IndexedFaceSet(convex=False,coordIndex=[12,54,55,13,-1,13,55,56,14,-1,14,56,57,15,-1,15,57,58,16,-1,16,58,59,17,-1,17,59,60,18,-1,18,60,61,19,-1,19,61,62,20,-1,20,62,63,21,-1,21,63,64,22,-1,22,64,65,23,-1,84,41,83,90,-1,89,0,42,95,-1],solid=False,
                coord=Coordinate(point=[(0.62265,0.0,0),(0.6218712004456791,0.0311325,0),(0.6195289277144369,0.062265,0),(0.6156053358230011,0.0933975,0),(0.6100699153375784,0.12453,0),(0.6028782701290121,0.1556625,0),(0.5939702437622613,0.186795,0),(0.5832672005554145,0.2179275,0),(0.5706681512928509,0.24906,0),(0.5560442297549271,0.2801925,0),(0.5392307176663808,0.311325,0),(0.520015272077417,0.3424575,0),(0.49812000000000006,0.37359,0),(0.47317303441103875,0.4047225,0),(0.4446610411032206,0.435855,0),(0.4118442634585919,0.4669875,0),(0.37359000000000003,0.49812,0),(0.3280012404606879,0.5292525,0),(0.2714068427195601,0.560385,0),(0.19442240018513812,0.5915175,0),(0.0,0.62265,0),(-0.0,0.62265,0),(-0.19442240018513812,0.5915175,0),(-0.2714068427195601,0.560385,0),(-0.3280012404606879,0.5292525,0),(-0.37359000000000003,0.49812,0),(-0.4118442634585919,0.4669875,0),(-0.4446610411032206,0.435855,0),(-0.47317303441103875,0.4047225,0),(-0.49812000000000006,0.37359,0),(-0.520015272077417,0.3424575,0),(-0.5392307176663808,0.311325,0),(-0.5560442297549271,0.2801925,0),(-0.5706681512928509,0.24906,0),(-0.5832672005554145,0.2179275,0),(-0.5939702437622613,0.186795,0),(-0.6028782701290121,0.1556625,0),(-0.6100699153375784,0.12453,0),(-0.6156053358230011,0.0933975,0),(-0.6195289277144369,0.062265,0),(-0.6218712004456791,0.0311325,0),(-0.62265,0.0,0),(0.62265,0.0,0.30),(0.6218712004456791,0.0311325,0.30),(0.6195289277144369,0.062265,0.30),(0.6156053358230011,0.0933975,0.30),(0.6100699153375784,0.12453,0.30),(0.6028782701290121,0.1556625,0.30),(0.5939702437622613,0.186795,0.30),(0.5832672005554145,0.2179275,0.30),(0.5706681512928509,0.24906,0.30),(0.5560442297549271,0.2801925,0.30),(0.5392307176663808,0.311325,0.30),(0.520015272077417,0.3424575,0.30),(0.49812000000000006,0.37359,0.30),(0.47317303441103875,0.4047225,0.30),(0.4446610411032206,0.435855,0.30),(0.4118442634585919,0.4669875,0.30),(0.37359000000000003,0.49812,0.30),(0.3280012404606879,0.5292525,0.30),(0.2714068427195601,0.560385,0.30),(0.19442240018513812,0.5915175,0.30),(0.0,0.62265,0.30),(-0.0,0.62265,0.30),(-0.19442240018513812,0.5915175,0.30),(-0.2714068427195601,0.560385,0.30),(-0.3280012404606879,0.5292525,0.30),(-0.37359000000000003,0.49812,0.30),(-0.4118442634585919,0.4669875,0.30),(-0.4446610411032206,0.435855,0.30),(-0.47317303441103875,0.4047225,0.30),(-0.49812000000000006,0.37359,0.30),(-0.520015272077417,0.3424575,0.30),(-0.5392307176663808,0.311325,0.30),(-0.5560442297549271,0.2801925,0.30),(-0.5706681512928509,0.24906,0.30),(-0.5832672005554145,0.2179275,0.30),(-0.5939702437622613,0.186795,0.30),(-0.6028782701290121,0.1556625,0.30),(-0.6100699153375784,0.12453,0.30),(-0.6156053358230011,0.0933975,0.30),(-0.6195289277144369,0.062265,0.30),(-0.6218712004456791,0.0311325,0.30),(-0.62265,0.0,0.30),(-0.62265,0,0),(-0.62265,0,0),(-0.62265,0,0),(0.62265,0,0),(0.62265,0,0),(0.62265,0,0),(-0.62265,0,0.30),(-0.62265,0,0.30),(-0.62265,0,0.30),(0.62265,0,0.30),(0.62265,0,0.30),(0.62265,0,0.30)])),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.75,0.25))))]),
          Transform(DEF='box1c',translation=(-2.4,0.8,0.3),
            children=[
            Shape(
              geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,38,37,-1,35,36,73,72,-1,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,-1,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,-1],creaseAngle=0.1745,solid=False,
                coord=Coordinate(point=[(-1.8,-0.66,0),(-1.05,-0.64,0),(-0.9,-0.61,0),(-0.6,-0.48,0),(-0.315,-0.25,0),(-0.16,-0.08,0),(-0.07,0.08,0),(0,0.355,0),(0.09,0.57,0),(0.16,0.77,0),(0.26,0.97,0),(0.37,1.17,0),(0.495,1.37,0),(0.66,1.57,0),(0.86,1.77,0),(0.995,1.87,0),(1.12,1.94,0),(1.19,1.94,0),(1.19,1.86,0),(0.98,1.67,0),(0.781,1.47,0),(0.715,1.37,0),(0.58,1.17,0),(0.52,1.07,0),(0.42,0.87,0),(0.36,0.76,0),(0.164,0.22,0),(0.166,0.2,0),(0.097,0,0),(-0.02,-0.2,0),(-0.17,-0.38,0),(-0.3,-0.49,0),(-0.6,-0.67,0),(-0.75,-0.72,0),(-0.95,-0.79,0),(-1.05,-0.81,0),(-1.8,-0.83,0),(-1.8,-0.66,-0.30),(-1.05,-0.64,-0.30),(-0.9,-0.61,-0.30),(-0.6,-0.48,-0.30),(-0.315,-0.25,-0.30),(-0.16,-0.08,-0.30),(-0.07,0.08,-0.30),(0,0.355,-0.30),(0.09,0.57,-0.30),(0.16,0.77,-0.30),(0.26,0.97,-0.30),(0.37,1.17,-0.30),(0.495,1.37,-0.30),(0.66,1.57,-0.30),(0.86,1.77,-0.30),(0.995,1.87,-0.30),(1.12,1.94,-0.30),(1.19,1.94,-0.30),(1.19,1.86,-0.30),(0.98,1.67,-0.30),(0.781,1.47,-0.30),(0.715,1.37,-0.30),(0.58,1.17,-0.30),(0.52,1.07,-0.30),(0.42,0.87,-0.30),(0.36,0.76,-0.30),(0.164,0.22,-0.30),(0.166,0.2,-0.30),(0.097,0,-0.30),(-0.02,-0.2,-0.30),(-0.17,-0.38,-0.30),(-0.3,-0.49,-0.30),(-0.6,-0.67,-0.30),(-0.75,-0.72,-0.30),(-0.95,-0.79,-0.30),(-1.05,-0.81,-0.30),(-1.8,-0.83,-0.30)])),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.75,0.25))))]),
          Transform(DEF='cilc',translation=(-1.13,2.625,0.15),rotation=(1,0,0,1.57),
            children=[
            Shape(
              geometry=Cylinder(height=0.3,radius=0.17),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.75,0.25))))]),
          Transform(DEF='2c',translation=(-3.45,1.11,0),rotation=(0,0,1,-2.6),scale=(1.8,1.45,1),
            children=[
            Shape(
              geometry=IndexedFaceSet(convex=False,coordIndex=[18,60,61,19,-1,19,61,62,20,-1,20,62,63,21,-1,21,63,64,22,-1,22,64,65,23,-1,23,65,66,24,-1,24,66,67,25,-1,25,67,68,26,-1,26,68,69,27,-1,27,69,70,28,-1,28,70,71,29,-1,29,71,72,30,-1,84,41,83,90,-1,89,0,42,95,-1],solid=False,
                coord=Coordinate(point=[(0.62265,0.0,0),(0.6218712004456791,0.0311325,0),(0.6195289277144369,0.062265,0),(0.6156053358230011,0.0933975,0),(0.6100699153375784,0.12453,0),(0.6028782701290121,0.1556625,0),(0.5939702437622613,0.186795,0),(0.5832672005554145,0.2179275,0),(0.5706681512928509,0.24906,0),(0.5560442297549271,0.2801925,0),(0.5392307176663808,0.311325,0),(0.520015272077417,0.3424575,0),(0.49812000000000006,0.37359,0),(0.47317303441103875,0.4047225,0),(0.4446610411032206,0.435855,0),(0.4118442634585919,0.4669875,0),(0.37359000000000003,0.49812,0),(0.3280012404606879,0.5292525,0),(0.2714068427195601,0.560385,0),(0.19442240018513812,0.5915175,0),(0.0,0.62265,0),(-0.0,0.62265,0),(-0.19442240018513812,0.5915175,0),(-0.2714068427195601,0.560385,0),(-0.3280012404606879,0.5292525,0),(-0.37359000000000003,0.49812,0),(-0.4118442634585919,0.4669875,0),(-0.4446610411032206,0.435855,0),(-0.47317303441103875,0.4047225,0),(-0.49812000000000006,0.37359,0),(-0.520015272077417,0.3424575,0),(-0.5392307176663808,0.311325,0),(-0.5560442297549271,0.2801925,0),(-0.5706681512928509,0.24906,0),(-0.5832672005554145,0.2179275,0),(-0.5939702437622613,0.186795,0),(-0.6028782701290121,0.1556625,0),(-0.6100699153375784,0.12453,0),(-0.6156053358230011,0.0933975,0),(-0.6195289277144369,0.062265,0),(-0.6218712004456791,0.0311325,0),(-0.62265,0.0,0),(0.62265,0.0,0.30),(0.6218712004456791,0.0311325,0.30),(0.6195289277144369,0.062265,0.30),(0.6156053358230011,0.0933975,0.30),(0.6100699153375784,0.12453,0.30),(0.6028782701290121,0.1556625,0.30),(0.5939702437622613,0.186795,0.30),(0.5832672005554145,0.2179275,0.30),(0.5706681512928509,0.24906,0.30),(0.5560442297549271,0.2801925,0.30),(0.5392307176663808,0.311325,0.30),(0.520015272077417,0.3424575,0.30),(0.49812000000000006,0.37359,0.30),(0.47317303441103875,0.4047225,0.30),(0.4446610411032206,0.435855,0.30),(0.4118442634585919,0.4669875,0.30),(0.37359000000000003,0.49812,0.30),(0.3280012404606879,0.5292525,0.30),(0.2714068427195601,0.560385,0.30),(0.19442240018513812,0.5915175,0.30),(0.0,0.62265,0.30),(-0.0,0.62265,0.30),(-0.19442240018513812,0.5915175,0.30),(-0.2714068427195601,0.560385,0.30),(-0.3280012404606879,0.5292525,0.30),(-0.37359000000000003,0.49812,0.30),(-0.4118442634585919,0.4669875,0.30),(-0.4446610411032206,0.435855,0.30),(-0.47317303441103875,0.4047225,0.30),(-0.49812000000000006,0.37359,0.30),(-0.520015272077417,0.3424575,0.30),(-0.5392307176663808,0.311325,0.30),(-0.5560442297549271,0.2801925,0.30),(-0.5706681512928509,0.24906,0.30),(-0.5832672005554145,0.2179275,0.30),(-0.5939702437622613,0.186795,0.30),(-0.6028782701290121,0.1556625,0.30),(-0.6100699153375784,0.12453,0.30),(-0.6156053358230011,0.0933975,0.30),(-0.6195289277144369,0.062265,0.30),(-0.6218712004456791,0.0311325,0.30),(-0.62265,0.0,0.30),(-0.62265,0,0),(-0.62265,0,0),(-0.62265,1,0),(0.62265,1,0),(0.62265,0,0),(0.62265,0,0),(-0.62265,0,0.30),(-0.62265,0,0.30),(-0.62265,1,0.30),(0.62265,1,0.30),(0.62265,0,0.30),(0.62265,0,0.30)])),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.75,0.25))))]),
          Transform(DEF='2bisc',translation=(-3.36,0.92,0),rotation=(0,0,1,-2.7),scale=(1.9,1.4,1),
            children=[
            Shape(
              geometry=IndexedFaceSet(convex=False,coordIndex=[18,60,61,19,-1,19,61,62,20,-1,20,62,63,21,-1,21,63,64,22,-1,22,64,65,23,-1,23,65,66,24,-1,24,66,67,25,-1,25,67,68,26,-1,26,68,69,27,-1,27,69,70,28,-1,28,70,71,29,-1,29,71,72,30,-1,30,72,73,31,-1,31,73,74,32,-1,32,74,75,33,-1,33,75,76,34,-1,34,76,77,35,-1,84,41,83,90,-1,89,0,42,95,-1],solid=False,
                coord=Coordinate(point=[(0.62265,0.0,0),(0.6218712004456791,0.0311325,0),(0.6195289277144369,0.062265,0),(0.6156053358230011,0.0933975,0),(0.6100699153375784,0.12453,0),(0.6028782701290121,0.1556625,0),(0.5939702437622613,0.186795,0),(0.5832672005554145,0.2179275,0),(0.5706681512928509,0.24906,0),(0.5560442297549271,0.2801925,0),(0.5392307176663808,0.311325,0),(0.520015272077417,0.3424575,0),(0.49812000000000006,0.37359,0),(0.47317303441103875,0.4047225,0),(0.4446610411032206,0.435855,0),(0.4118442634585919,0.4669875,0),(0.37359000000000003,0.49812,0),(0.3280012404606879,0.5292525,0),(0.2714068427195601,0.560385,0),(0.19442240018513812,0.5915175,0),(0.0,0.62265,0),(-0.0,0.62265,0),(-0.19442240018513812,0.5915175,0),(-0.2714068427195601,0.560385,0),(-0.3280012404606879,0.5292525,0),(-0.37359000000000003,0.49812,0),(-0.4118442634585919,0.4669875,0),(-0.4446610411032206,0.435855,0),(-0.47317303441103875,0.4047225,0),(-0.49812000000000006,0.37359,0),(-0.520015272077417,0.3424575,0),(-0.5392307176663808,0.311325,0),(-0.5560442297549271,0.2801925,0),(-0.5706681512928509,0.24906,0),(-0.5832672005554145,0.2179275,0),(-0.5939702437622613,0.186795,0),(-0.6028782701290121,0.1556625,0),(-0.6100699153375784,0.12453,0),(-0.6156053358230011,0.0933975,0),(-0.6195289277144369,0.062265,0),(-0.6218712004456791,0.0311325,0),(-0.62265,0.0,0),(0.62265,0.0,0.30),(0.6218712004456791,0.0311325,0.30),(0.6195289277144369,0.062265,0.30),(0.6156053358230011,0.0933975,0.30),(0.6100699153375784,0.12453,0.30),(0.6028782701290121,0.1556625,0.30),(0.5939702437622613,0.186795,0.30),(0.5832672005554145,0.2179275,0.30),(0.5706681512928509,0.24906,0.30),(0.5560442297549271,0.2801925,0.30),(0.5392307176663808,0.311325,0.30),(0.520015272077417,0.3424575,0.30),(0.49812000000000006,0.37359,0.30),(0.47317303441103875,0.4047225,0.30),(0.4446610411032206,0.435855,0.30),(0.4118442634585919,0.4669875,0.30),(0.37359000000000003,0.49812,0.30),(0.3280012404606879,0.5292525,0.30),(0.2714068427195601,0.560385,0.30),(0.19442240018513812,0.5915175,0.30),(0.0,0.62265,0.30),(-0.0,0.62265,0.30),(-0.19442240018513812,0.5915175,0.30),(-0.2714068427195601,0.560385,0.30),(-0.3280012404606879,0.5292525,0.30),(-0.37359000000000003,0.49812,0.30),(-0.4118442634585919,0.4669875,0.30),(-0.4446610411032206,0.435855,0.30),(-0.47317303441103875,0.4047225,0.30),(-0.49812000000000006,0.37359,0.30),(-0.520015272077417,0.3424575,0.30),(-0.5392307176663808,0.311325,0.30),(-0.5560442297549271,0.2801925,0.30),(-0.5706681512928509,0.24906,0.30),(-0.5832672005554145,0.2179275,0.30),(-0.5939702437622613,0.186795,0.30),(-0.6028782701290121,0.1556625,0.30),(-0.6100699153375784,0.12453,0.30),(-0.6156053358230011,0.0933975,0.30),(-0.6195289277144369,0.062265,0.30),(-0.6218712004456791,0.0311325,0.30),(-0.62265,0.0,0.30),(-0.62265,0,0),(-0.62265,0,0),(-0.62265,1,0),(0.62265,1,0),(0.62265,0,0),(0.62265,0,0),(-0.62265,0,0.30),(-0.62265,0,0.30),(-0.62265,1,0.30),(0.62265,1,0.30),(0.62265,0,0.30),(0.62265,0,0.30)])),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.75,0.25))))])])]),
      Transform(DEF='arcoSopra',translation=(5.725,8.35,0.27),scale=(1.6,1,1),
        children=[
        Shape(
          geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,84,85,86,87,88,89,-1,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,90,91,92,93,94,95,-1,0,42,43,1,-1,1,43,44,2,-1,2,44,45,3,-1,3,45,46,4,-1,4,46,47,5,-1,5,47,48,6,-1,6,48,49,7,-1,7,49,50,8,-1,8,50,51,9,-1,9,51,52,10,-1,10,52,53,11,-1,11,53,54,12,-1,12,54,55,13,-1,13,55,56,14,-1,14,56,57,15,-1,15,57,58,16,-1,16,58,59,17,-1,17,59,60,18,-1,18,60,61,19,-1,19,61,62,20,-1,20,62,63,21,-1,21,63,64,22,-1,22,64,65,23,-1,23,65,66,24,-1,24,66,67,25,-1,25,67,68,26,-1,26,68,69,27,-1,27,69,70,28,-1,28,70,71,29,-1,29,71,72,30,-1,30,72,73,31,-1,31,73,74,32,-1,32,74,75,33,-1,33,75,76,34,-1,34,76,77,35,-1,35,77,78,36,-1,36,78,79,37,-1,37,79,80,38,-1,38,80,81,39,-1,39,81,82,40,-1,40,82,83,41,-1,84,41,83,90,-1,89,0,42,95,-1],solid=False,
            coord=Coordinate(point=[(0.62265,0.0,0),(0.6218712004456791,0.0311325,0),(0.6195289277144369,0.062265,0),(0.6156053358230011,0.0933975,0),(0.6100699153375784,0.12453,0),(0.6028782701290121,0.1556625,0),(0.5939702437622613,0.186795,0),(0.5832672005554145,0.2179275,0),(0.5706681512928509,0.24906,0),(0.5560442297549271,0.2801925,0),(0.5392307176663808,0.311325,0),(0.520015272077417,0.3424575,0),(0.49812000000000006,0.37359,0),(0.47317303441103875,0.4047225,0),(0.4446610411032206,0.435855,0),(0.4118442634585919,0.4669875,0),(0.37359000000000003,0.49812,0),(0.3280012404606879,0.5292525,0),(0.2714068427195601,0.560385,0),(0.19442240018513812,0.5915175,0),(0.0,0.62265,0),(-0.0,0.62265,0),(-0.19442240018513812,0.5915175,0),(-0.2714068427195601,0.560385,0),(-0.3280012404606879,0.5292525,0),(-0.37359000000000003,0.49812,0),(-0.4118442634585919,0.4669875,0),(-0.4446610411032206,0.435855,0),(-0.47317303441103875,0.4047225,0),(-0.49812000000000006,0.37359,0),(-0.520015272077417,0.3424575,0),(-0.5392307176663808,0.311325,0),(-0.5560442297549271,0.2801925,0),(-0.5706681512928509,0.24906,0),(-0.5832672005554145,0.2179275,0),(-0.5939702437622613,0.186795,0),(-0.6028782701290121,0.1556625,0),(-0.6100699153375784,0.12453,0),(-0.6156053358230011,0.0933975,0),(-0.6195289277144369,0.062265,0),(-0.6218712004456791,0.0311325,0),(-0.62265,0.0,0),(0.62265,0.0,0.30),(0.6218712004456791,0.0311325,0.30),(0.6195289277144369,0.062265,0.30),(0.6156053358230011,0.0933975,0.30),(0.6100699153375784,0.12453,0.30),(0.6028782701290121,0.1556625,0.30),(0.5939702437622613,0.186795,0.30),(0.5832672005554145,0.2179275,0.30),(0.5706681512928509,0.24906,0.30),(0.5560442297549271,0.2801925,0.30),(0.5392307176663808,0.311325,0.30),(0.520015272077417,0.3424575,0.30),(0.49812000000000006,0.37359,0.30),(0.47317303441103875,0.4047225,0.30),(0.4446610411032206,0.435855,0.30),(0.4118442634585919,0.4669875,0.30),(0.37359000000000003,0.49812,0.30),(0.3280012404606879,0.5292525,0.30),(0.2714068427195601,0.560385,0.30),(0.19442240018513812,0.5915175,0.30),(0.0,0.62265,0.30),(-0.0,0.62265,0.30),(-0.19442240018513812,0.5915175,0.30),(-0.2714068427195601,0.560385,0.30),(-0.3280012404606879,0.5292525,0.30),(-0.37359000000000003,0.49812,0.30),(-0.4118442634585919,0.4669875,0.30),(-0.4446610411032206,0.435855,0.30),(-0.47317303441103875,0.4047225,0.30),(-0.49812000000000006,0.37359,0.30),(-0.520015272077417,0.3424575,0.30),(-0.5392307176663808,0.311325,0.30),(-0.5560442297549271,0.2801925,0.30),(-0.5706681512928509,0.24906,0.30),(-0.5832672005554145,0.2179275,0.30),(-0.5939702437622613,0.186795,0.30),(-0.6028782701290121,0.1556625,0.30),(-0.6100699153375784,0.12453,0.30),(-0.6156053358230011,0.0933975,0.30),(-0.6195289277144369,0.062265,0.30),(-0.6218712004456791,0.0311325,0.30),(-0.62265,0.0,0.30),(-0.62265,0,0),(-0.62265,0,0),(-0.62265,-0.62265,0),(0.62265,-0.62265,0),(0.62265,0,0),(0.62265,0,0),(-0.62265,0,0.30),(-0.62265,0,0.30),(-0.62265,-0.62265,0.30),(0.62265,-0.62265,0.30),(0.62265,0,0.30),(0.62265,0,0.30)])),
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.75,0.25))))]),
      #  Ground Floor - Center 
      Transform(DEF='GF CENTER',
        # TODO add children nodes here
        ),
      Transform(DEF='TramezzoIngresso',translation=(3.365,-0.07,-2.1),rotation=(0,0,0,0),
        children=[
        Shape(
          geometry=Box(size=(2.35,4.13,0.22)),
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.75,0.25))))]),
      Transform(DEF='ArcoIngr',translation=(5.72,0.23,-2.21),scale=(1.9,1.9,1),
        children=[
        Shape(
          geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,84,85,86,87,88,89,-1,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,90,91,92,93,94,95,-1,0,42,43,1,-1,1,43,44,2,-1,2,44,45,3,-1,3,45,46,4,-1,4,46,47,5,-1,5,47,48,6,-1,6,48,49,7,-1,7,49,50,8,-1,8,50,51,9,-1,9,51,52,10,-1,10,52,53,11,-1,11,53,54,12,-1,12,54,55,13,-1,13,55,56,14,-1,14,56,57,15,-1,15,57,58,16,-1,16,58,59,17,-1,17,59,60,18,-1,18,60,61,19,-1,19,61,62,20,-1,20,62,63,21,-1,21,63,64,22,-1,22,64,65,23,-1,23,65,66,24,-1,24,66,67,25,-1,25,67,68,26,-1,26,68,69,27,-1,27,69,70,28,-1,28,70,71,29,-1,29,71,72,30,-1,30,72,73,31,-1,31,73,74,32,-1,32,74,75,33,-1,33,75,76,34,-1,34,76,77,35,-1,35,77,78,36,-1,36,78,79,37,-1,37,79,80,38,-1,38,80,81,39,-1,39,81,82,40,-1,40,82,83,41,-1,84,41,83,90,-1,89,0,42,95,-1],solid=False,
            coord=Coordinate(point=[(0.62265,0.0,0),(0.6218712004456791,0.0311325,0),(0.6195289277144369,0.062265,0),(0.6156053358230011,0.0933975,0),(0.6100699153375784,0.12453,0),(0.6028782701290121,0.1556625,0),(0.5939702437622613,0.186795,0),(0.5832672005554145,0.2179275,0),(0.5706681512928509,0.24906,0),(0.5560442297549271,0.2801925,0),(0.5392307176663808,0.311325,0),(0.520015272077417,0.3424575,0),(0.49812000000000006,0.37359,0),(0.47317303441103875,0.4047225,0),(0.4446610411032206,0.435855,0),(0.4118442634585919,0.4669875,0),(0.37359000000000003,0.49812,0),(0.3280012404606879,0.5292525,0),(0.2714068427195601,0.560385,0),(0.19442240018513812,0.5915175,0),(0.0,0.62265,0),(-0.0,0.62265,0),(-0.19442240018513812,0.5915175,0),(-0.2714068427195601,0.560385,0),(-0.3280012404606879,0.5292525,0),(-0.37359000000000003,0.49812,0),(-0.4118442634585919,0.4669875,0),(-0.4446610411032206,0.435855,0),(-0.47317303441103875,0.4047225,0),(-0.49812000000000006,0.37359,0),(-0.520015272077417,0.3424575,0),(-0.5392307176663808,0.311325,0),(-0.5560442297549271,0.2801925,0),(-0.5706681512928509,0.24906,0),(-0.5832672005554145,0.2179275,0),(-0.5939702437622613,0.186795,0),(-0.6028782701290121,0.1556625,0),(-0.6100699153375784,0.12453,0),(-0.6156053358230011,0.0933975,0),(-0.6195289277144369,0.062265,0),(-0.6218712004456791,0.0311325,0),(-0.62265,0.0,0),(0.62265,0.0,0.22),(0.6218712004456791,0.0311325,0.22),(0.6195289277144369,0.062265,0.22),(0.6156053358230011,0.0933975,0.22),(0.6100699153375784,0.12453,0.22),(0.6028782701290121,0.1556625,0.22),(0.5939702437622613,0.186795,0.22),(0.5832672005554145,0.2179275,0.22),(0.5706681512928509,0.24906,0.22),(0.5560442297549271,0.2801925,0.22),(0.5392307176663808,0.311325,0.22),(0.520015272077417,0.3424575,0.22),(0.49812000000000006,0.37359,0.22),(0.47317303441103875,0.4047225,0.22),(0.4446610411032206,0.435855,0.22),(0.4118442634585919,0.4669875,0.22),(0.37359000000000003,0.49812,0.22),(0.3280012404606879,0.5292525,0.22),(0.2714068427195601,0.560385,0.22),(0.19442240018513812,0.5915175,0.22),(0.0,0.62265,0.22),(-0.0,0.62265,0.22),(-0.19442240018513812,0.5915175,0.22),(-0.2714068427195601,0.560385,0.22),(-0.3280012404606879,0.5292525,0.22),(-0.37359000000000003,0.49812,0.22),(-0.4118442634585919,0.4669875,0.22),(-0.4446610411032206,0.435855,0.22),(-0.47317303441103875,0.4047225,0.22),(-0.49812000000000006,0.37359,0.22),(-0.520015272077417,0.3424575,0.22),(-0.5392307176663808,0.311325,0.22),(-0.5560442297549271,0.2801925,0.22),(-0.5706681512928509,0.24906,0.22),(-0.5832672005554145,0.2179275,0.22),(-0.5939702437622613,0.186795,0.22),(-0.6028782701290121,0.1556625,0.22),(-0.6100699153375784,0.12453,0.22),(-0.6156053358230011,0.0933975,0.22),(-0.6195289277144369,0.062265,0.22),(-0.6218712004456791,0.0311325,0.22),(-0.62265,0.0,0.22),(-0.62265,0,0),(-0.62265,0,0),(-0.62265,0.92,0),(0.62265,0.93,0),(0.62265,0,0),(0.62265,0,0),(-0.62265,0,0.22),(-0.62265,0,0.22),(-0.62265,0.93,0.22),(0.62265,0.93,0.22),(0.62265,0,0.22),(0.62265,0,0.22)])),
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.75,0.25))))]),
      Transform(DEF='TramezzoDX',translation=(7.205,-0.07,-2.1),rotation=(0,0,0,0),
        children=[
        Shape(
          geometry=Box(size=(0.61,4.13,0.22)),
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.75,0.25))))]),
      Transform(DEF='Termine0',translation=(3.65,-2.13,-0.67),
        children=[
        Shape(
          geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,6,5,-1,0,4,9,5,-1,4,3,8,9,-1,3,2,7,8,-1,1,2,7,6,-1,0,1,2,3,4,-1,5,6,7,8,9,-1,6,12,11,10,-1],solid=False,
            coord=Coordinate(point=[(0,0,0),(0,0,1.34),(0.89,0,1.34),(0.89,0,0.58),(0.62,0,0.58),(0,4.3,0),(0,4.3,1.34),(0.89,4.3,1.34),(0.89,4.3,0.58),(0.62,4.3,0.58),(0,5.52,1.34),(1.081,5.52,1.34),(1.081,4.3,1.34)])),
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.75,0.25))))]),
      Transform(DEF='termine1',translation=(6.9,-2.13,0.49),
        children=[
        Shape(
          geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,3,0,4,7,-1,0,1,2,3,-1,4,5,6,7,-1,10,8,9,11,-1],solid=False,
            coord=Coordinate(point=[(0,0,0.18),(0.63,0,0.18),(0.63,0,-0.8),(0,0,-0.58),(0,4.3,0.18),(0.63,4.3,0.18),(0.63,4.3,-0.8),(0,4.3,-0.58),(-0.191,5.52,0.18),(3.78,5.52,0.18),(-0.191,4.3,0.18),(3.78,4.3,0.18)])),
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.75,0.25))))]),
      #  Ground Floor - right  
      Transform(DEF='GF RIGHT',
        # TODO add children nodes here
        ),
      Transform(DEF='MuroLateraleDX',
        children=[
        Transform(DEF='MuroLateraleInt',translation=(9.356,-2.135,-31.17),rotation=(0,1,0,-1.57),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,10,12,7,3,-1,3,4,5,6,11,13,14,16,-1,16,10,34,19,20,22,-1,22,35,24,26,25,27,28,30,-1,30,24,31,32,-1],solid=False,
              coord=Coordinate(point=[(0,0,0),(0,7.73,0),(4.41,7.73,0),(4.41,0,0),(4.41,1.91,0),(6.23,1.91,0),(6.23,4.66,0),(4.41,4.66,0),(6.23,7.73,0),(13.39,7.73,0),(15.21,7.73,0),(13.39,4.66,0),(15.21,4.66,0),(13.39,1.91,0),(15.21,1.91,0),(13.39,0,0),(15.21,0,0),(17.46,4.09,0),(18.68,4.09,0),(17.46,2.33,0),(18.68,2.33,0),(17.46,0,0),(18.68,0,0),(22.61,7.73,0),(24.43,7.73,0),(22.61,4.66,0),(24.43,4.66,0),(22.61,1.91,0),(24.43,1.91,0),(22.61,0,0),(24.43,0,0),(31.3,7.73,0),(31.3,0,0),(6.23,0,0),(17.46,7.73,0),(18.68,7.73,0)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='nicchia',translation=(9.3708,0.195,-12.49),rotation=(0,1,0,1.57),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,3,2,6,7,-1,1,2,6,5,-1,0,1,2,3,-1],solid=False,
              coord=Coordinate(point=[(0,0,0),(0,0,0.8),(1.221,0,0.8),(1.221,0,0),(0,2.5,0),(0,2.5,0.8),(1.221,2.5,0.8),(1.221,2.5,0)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='nicchia2',translation=(9.3708,1.95,-13.1),rotation=(0,1,0,1.57),scale=(0.99,1,1),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,84,85,86,87,88,89,-1,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,90,91,92,93,94,95,-1,0,42,43,1,-1,1,43,44,2,-1,2,44,45,3,-1,3,45,46,4,-1,4,46,47,5,-1,5,47,48,6,-1,6,48,49,7,-1,7,49,50,8,-1,8,50,51,9,-1,9,51,52,10,-1,10,52,53,11,-1,11,53,54,12,-1,12,54,55,13,-1,13,55,56,14,-1,14,56,57,15,-1,15,57,58,16,-1,16,58,59,17,-1,17,59,60,18,-1,18,60,61,19,-1,19,61,62,20,-1,20,62,63,21,-1,21,63,64,22,-1,22,64,65,23,-1,23,65,66,24,-1,24,66,67,25,-1,25,67,68,26,-1,26,68,69,27,-1,27,69,70,28,-1,28,70,71,29,-1,29,71,72,30,-1,30,72,73,31,-1,31,73,74,32,-1,32,74,75,33,-1,33,75,76,34,-1,34,76,77,35,-1,35,77,78,36,-1,36,78,79,37,-1,37,79,80,38,-1,38,80,81,39,-1,39,81,82,40,-1,40,82,83,41,-1,84,41,83,90,-1,89,0,42,95,-1],solid=False,
              coord=Coordinate(point=[(0.62265,0.0,0),(0.6218712004456791,0.0311325,0),(0.6195289277144369,0.062265,0),(0.6156053358230011,0.0933975,0),(0.6100699153375784,0.12453,0),(0.6028782701290121,0.1556625,0),(0.5939702437622613,0.186795,0),(0.5832672005554145,0.2179275,0),(0.5706681512928509,0.24906,0),(0.5560442297549271,0.2801925,0),(0.5392307176663808,0.311325,0),(0.520015272077417,0.3424575,0),(0.49812000000000006,0.37359,0),(0.47317303441103875,0.4047225,0),(0.4446610411032206,0.435855,0),(0.4118442634585919,0.4669875,0),(0.37359000000000003,0.49812,0),(0.3280012404606879,0.5292525,0),(0.2714068427195601,0.560385,0),(0.19442240018513812,0.5915175,0),(0.0,0.62265,0),(-0.0,0.62265,0),(-0.19442240018513812,0.5915175,0),(-0.2714068427195601,0.560385,0),(-0.3280012404606879,0.5292525,0),(-0.37359000000000003,0.49812,0),(-0.4118442634585919,0.4669875,0),(-0.4446610411032206,0.435855,0),(-0.47317303441103875,0.4047225,0),(-0.49812000000000006,0.37359,0),(-0.520015272077417,0.3424575,0),(-0.5392307176663808,0.311325,0),(-0.5560442297549271,0.2801925,0),(-0.5706681512928509,0.24906,0),(-0.5832672005554145,0.2179275,0),(-0.5939702437622613,0.186795,0),(-0.6028782701290121,0.1556625,0),(-0.6100699153375784,0.12453,0),(-0.6156053358230011,0.0933975,0),(-0.6195289277144369,0.062265,0),(-0.6218712004456791,0.0311325,0),(-0.62265,0.0,0),(0.62265,0.0,0.8),(0.6218712004456791,0.0311325,0.8),(0.6195289277144369,0.062265,0.8),(0.6156053358230011,0.0933975,0.8),(0.6100699153375784,0.12453,0.8),(0.6028782701290121,0.1556625,0.8),(0.5939702437622613,0.186795,0.8),(0.5832672005554145,0.2179275,0.8),(0.5706681512928509,0.24906,0.8),(0.5560442297549271,0.2801925,0.8),(0.5392307176663808,0.311325,0.8),(0.520015272077417,0.3424575,0.8),(0.49812000000000006,0.37359,0.8),(0.47317303441103875,0.4047225,0.8),(0.4446610411032206,0.435855,0.8),(0.4118442634585919,0.4669875,0.8),(0.37359000000000003,0.49812,0.8),(0.3280012404606879,0.5292525,0.8),(0.2714068427195601,0.560385,0.8),(0.19442240018513812,0.5915175,0.8),(0.0,0.62265,0.8),(-0.0,0.62265,0.8),(-0.19442240018513812,0.5915175,0.8),(-0.2714068427195601,0.560385,0.8),(-0.3280012404606879,0.5292525,0.8),(-0.37359000000000003,0.49812,0.8),(-0.4118442634585919,0.4669875,0.8),(-0.4446610411032206,0.435855,0.8),(-0.47317303441103875,0.4047225,0.8),(-0.49812000000000006,0.37359,0.8),(-0.520015272077417,0.3424575,0.8),(-0.5392307176663808,0.311325,0.8),(-0.5560442297549271,0.2801925,0.8),(-0.5706681512928509,0.24906,0.8),(-0.5832672005554145,0.2179275,0.8),(-0.5939702437622613,0.186795,0.8),(-0.6028782701290121,0.1556625,0.8),(-0.6100699153375784,0.12453,0.8),(-0.6156053358230011,0.0933975,0.8),(-0.6195289277144369,0.062265,0.8),(-0.6218712004456791,0.0311325,0.8),(-0.62265,0.0,0.8),(-0.62265,0,0),(-0.62265,0,0),(-0.62265,3.65,0),(0.62265,3.65,0),(0.62265,0,0),(0.62265,0,0),(-0.62265,0,0.8),(-0.62265,0,0.8),(-0.62265,1.15,0.8),(0.62265,1.15,0.8),(0.62265,0,0.8),(0.62265,0,0.8)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='MuroLateraleEst',translation=(10.666,-2.135,-31.17),rotation=(0,1,0,-1.57),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,10,12,7,3,-1,3,4,5,6,11,13,14,16,-1,16,10,34,19,20,22,-1,22,35,24,26,25,27,28,30,-1,30,24,31,32,-1,19,29,35,34,-1],solid=False,
              coord=Coordinate(point=[(0,0,0),(0,7.73,0),(4.41,7.73,0),(4.41,0,0),(4.41,1.91,0),(6.23,1.91,0),(6.23,4.66,0),(4.41,4.66,0),(6.23,7.73,0),(13.39,7.73,0),(15.21,7.73,0),(13.39,4.66,0),(15.21,4.66,0),(13.39,1.91,0),(15.21,1.91,0),(13.39,0,0),(15.21,0,0),(17.46,4.09,0),(18.68,4.09,0),(17.46,2.33,0),(18.68,2.33,0),(17.46,0,0),(18.68,0,0),(22.61,7.73,0),(24.43,7.73,0),(22.61,4.66,0),(24.43,4.66,0),(22.61,1.91,0),(24.43,1.91,0),(22.61,0,0),(24.43,0,0),(30.5,7.73,0),(30.5,0,0),(6.23,0,0),(17.46,7.73,0),(18.68,7.73,0)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))])]),
      Transform(DEF='MuroLateraleSX',translation=(-9.81,0,0.02),
        children=[
        Transform(DEF='MuroLateraleInt',translation=(11.985,-2.135,-31.17),rotation=(0,1,0,-1.57),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,10,12,7,3,-1,3,4,5,6,11,13,14,16,-1,16,10,34,19,20,22,-1,22,35,24,26,25,27,28,30,-1,30,24,31,32,-1,32,36,37,38,-1],solid=False,
              coord=Coordinate(point=[(0,0,0),(0,7.73,0),(4.41,7.73,0),(4.41,0,0),(4.41,1.91,0),(6.23,1.91,0),(6.23,4.66,0),(4.41,4.66,0),(6.23,7.73,0),(13.39,7.73,0),(15.21,7.73,0),(13.39,4.66,0),(15.21,4.66,0),(13.39,1.91,0),(15.21,1.91,0),(13.39,0,0),(15.21,0,0),(17.32,4.09,0),(19.44,4.09,0),(17.32,2.33,0),(19.44,2.33,0),(17.32,0,0),(19.44,0,0),(22.61,7.73,0),(24.43,7.73,0),(22.61,4.66,0),(24.43,4.66,0),(22.61,1.91,0),(24.43,1.91,0),(22.61,0,0),(24.43,0,0),(27.7,7.73,0),(27.7,0,0),(6.23,0,0),(17.32,7.73,0),(19.44,7.73,0),(27.7,4.13,0),(29,4.13,0),(29,0,0),(17.32,4.09,0.8),(19.44,4.09,0.8),(17.32,2.33,0.8),(19.44,2.33,0.8)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='MuroLateraleEst',translation=(10.666,-2.135,-31.17),rotation=(0,1,0,-1.57),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,10,12,7,3,-1,3,4,5,6,11,13,14,16,-1,16,10,34,19,20,22,-1,22,35,24,26,25,27,28,30,-1,30,24,31,32,-1,19,29,35,34,-1],solid=False,
              coord=Coordinate(point=[(0,0,0),(0,7.73,0),(4.41,7.73,0),(4.41,0,0),(4.41,1.91,0),(6.23,1.91,0),(6.23,4.66,0),(4.41,4.66,0),(6.23,7.73,0),(13.39,7.73,0),(15.21,7.73,0),(13.39,4.66,0),(15.21,4.66,0),(13.39,1.91,0),(15.21,1.91,0),(13.39,0,0),(15.21,0,0),(17.46,4.09,0),(18.68,4.09,0),(17.46,2.33,0),(18.68,2.33,0),(17.46,0,0),(18.68,0,0),(22.61,7.73,0),(24.43,7.73,0),(22.61,4.66,0),(24.43,4.66,0),(22.61,1.91,0),(24.43,1.91,0),(22.61,0,0),(24.43,0,0),(27.7,7.73,0),(27.7,0,0),(6.23,0,0),(17.46,7.73,0),(18.68,7.73,0)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='NicchiaSX1',translation=(11.985,-2.135,-31.17),rotation=(0,1,0,-1.57),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[18,20,42,40,-1,19,20,42,41,-1,17,19,41,39,-1],solid=False,
              coord=Coordinate(point=[(0,0,0),(0,7.73,0),(4.41,7.73,0),(4.41,0,0),(4.41,1.91,0),(6.23,1.91,0),(6.23,4.66,0),(4.41,4.66,0),(6.23,7.73,0),(13.39,7.73,0),(15.21,7.73,0),(13.39,4.66,0),(15.21,4.66,0),(13.39,1.91,0),(15.21,1.91,0),(13.39,0,0),(15.21,0,0),(17.32,4.34,0),(19.44,4.34,0),(17.32,2.33,0),(19.44,2.33,0),(17.32,0,0),(19.44,0,0),(22.61,7.73,0),(24.43,7.73,0),(22.61,4.66,0),(24.43,4.66,0),(22.61,1.91,0),(24.43,1.91,0),(22.61,0,0),(24.43,0,0),(27.7,7.73,0),(27.7,0,0),(6.23,0,0),(17.32,7.73,0),(19.44,7.73,0),(27.7,4.13,0),(29,4.13,0),(29,0,0),(17.32,4.34,0.8),(19.44,4.34,0.8),(17.32,2.33,0.8),(19.44,2.33,0.8)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='NicchiaSX2',translation=(12,2.2,-12.79),rotation=(0,1,0,-1.57),scale=(1.71,1,1),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,84,85,86,87,88,89,-1,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,90,91,92,93,94,95,-1,0,42,43,1,-1,1,43,44,2,-1,2,44,45,3,-1,3,45,46,4,-1,4,46,47,5,-1,5,47,48,6,-1,6,48,49,7,-1,7,49,50,8,-1,8,50,51,9,-1,9,51,52,10,-1,10,52,53,11,-1,11,53,54,12,-1,12,54,55,13,-1,13,55,56,14,-1,14,56,57,15,-1,15,57,58,16,-1,16,58,59,17,-1,17,59,60,18,-1,18,60,61,19,-1,19,61,62,20,-1,20,62,63,21,-1,21,63,64,22,-1,22,64,65,23,-1,23,65,66,24,-1,24,66,67,25,-1,25,67,68,26,-1,26,68,69,27,-1,27,69,70,28,-1,28,70,71,29,-1,29,71,72,30,-1,30,72,73,31,-1,31,73,74,32,-1,32,74,75,33,-1,33,75,76,34,-1,34,76,77,35,-1,35,77,78,36,-1,36,78,79,37,-1,37,79,80,38,-1,38,80,81,39,-1,39,81,82,40,-1,40,82,83,41,-1,84,41,83,90,-1,89,0,42,95,-1],solid=False,
              coord=Coordinate(point=[(0.62265,0.0,0),(0.6218712004456791,0.0311325,0),(0.6195289277144369,0.062265,0),(0.6156053358230011,0.0933975,0),(0.6100699153375784,0.12453,0),(0.6028782701290121,0.1556625,0),(0.5939702437622613,0.186795,0),(0.5832672005554145,0.2179275,0),(0.5706681512928509,0.24906,0),(0.5560442297549271,0.2801925,0),(0.5392307176663808,0.311325,0),(0.520015272077417,0.3424575,0),(0.49812000000000006,0.37359,0),(0.47317303441103875,0.4047225,0),(0.4446610411032206,0.435855,0),(0.4118442634585919,0.4669875,0),(0.37359000000000003,0.49812,0),(0.3280012404606879,0.5292525,0),(0.2714068427195601,0.560385,0),(0.19442240018513812,0.5915175,0),(0.0,0.62265,0),(-0.0,0.62265,0),(-0.19442240018513812,0.5915175,0),(-0.2714068427195601,0.560385,0),(-0.3280012404606879,0.5292525,0),(-0.37359000000000003,0.49812,0),(-0.4118442634585919,0.4669875,0),(-0.4446610411032206,0.435855,0),(-0.47317303441103875,0.4047225,0),(-0.49812000000000006,0.37359,0),(-0.520015272077417,0.3424575,0),(-0.5392307176663808,0.311325,0),(-0.5560442297549271,0.2801925,0),(-0.5706681512928509,0.24906,0),(-0.5832672005554145,0.2179275,0),(-0.5939702437622613,0.186795,0),(-0.6028782701290121,0.1556625,0),(-0.6100699153375784,0.12453,0),(-0.6156053358230011,0.0933975,0),(-0.6195289277144369,0.062265,0),(-0.6218712004456791,0.0311325,0),(-0.62265,0.0,0),(0.62265,0.0,0.8),(0.6218712004456791,0.0311325,0.8),(0.6195289277144369,0.062265,0.8),(0.6156053358230011,0.0933975,0.8),(0.6100699153375784,0.12453,0.8),(0.6028782701290121,0.1556625,0.8),(0.5939702437622613,0.186795,0.8),(0.5832672005554145,0.2179275,0.8),(0.5706681512928509,0.24906,0.8),(0.5560442297549271,0.2801925,0.8),(0.5392307176663808,0.311325,0.8),(0.520015272077417,0.3424575,0.8),(0.49812000000000006,0.37359,0.8),(0.47317303441103875,0.4047225,0.8),(0.4446610411032206,0.435855,0.8),(0.4118442634585919,0.4669875,0.8),(0.37359000000000003,0.49812,0.8),(0.3280012404606879,0.5292525,0.8),(0.2714068427195601,0.560385,0.8),(0.19442240018513812,0.5915175,0.8),(0.0,0.62265,0.8),(-0.0,0.62265,0.8),(-0.19442240018513812,0.5915175,0.8),(-0.2714068427195601,0.560385,0.8),(-0.3280012404606879,0.5292525,0.8),(-0.37359000000000003,0.49812,0.8),(-0.4118442634585919,0.4669875,0.8),(-0.4446610411032206,0.435855,0.8),(-0.47317303441103875,0.4047225,0.8),(-0.49812000000000006,0.37359,0.8),(-0.520015272077417,0.3424575,0.8),(-0.5392307176663808,0.311325,0.8),(-0.5560442297549271,0.2801925,0.8),(-0.5706681512928509,0.24906,0.8),(-0.5832672005554145,0.2179275,0.8),(-0.5939702437622613,0.186795,0.8),(-0.6028782701290121,0.1556625,0.8),(-0.6100699153375784,0.12453,0.8),(-0.6156053358230011,0.0933975,0.8),(-0.6195289277144369,0.062265,0.8),(-0.6218712004456791,0.0311325,0.8),(-0.62265,0.0,0.8),(-0.62265,0,0),(-0.62265,0,0),(-0.62265,3.45,0),(0.62265,3.45,0),(0.62265,0,0),(0.62265,0,0),(-0.62265,0,0.8),(-0.62265,0,0.8),(-0.62265,0.95,0.8),(0.62265,0.95,0.8),(0.62265,0,0.8),(0.62265,0,0.8)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))])]),
      Transform(DEF='MuroTransetto1DX',translation=(9.36,-2.135,-30.22),
        children=[
        Transform(DEF='MuroTransetto1EstDX',
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[1,2,18,19,4,5,13,9,-1,6,5,13,14,-1],solid=False,
              coord=Coordinate(point=[(0,0,0),(0,0,-0.95),(3.87,0,-0.95),(3.87,0,0),(5.58,0,-0.95),(8.28,0,-0.95),(8.28,0,0),(5.58,0,0),(0,7.73,0),(0,7.73,-0.95),(3.87,7.73,-0.95),(3.87,7.73,0),(5.58,7.73,-0.95),(8.28,7.73,-0.95),(8.28,7.73,0),(5.58,7.73,0),(3.87,2.75,0),(5.58,2.75,0),(3.87,2.75,-0.95),(5.58,2.75,-0.95)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='MuroTransetto1IntDX',
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,3,16,17,7,6,14,8,-1,2,3,16,18,-1,4,7,17,19,-1,16,17,19,18,-1],solid=False,
              coord=Coordinate(point=[(0,0,0),(0,0,-0.95),(3.87,0,-0.95),(3.87,0,0),(5.58,0,-0.95),(8.28,0,-0.95),(8.28,0,0),(5.58,0,0),(0,7.73,0),(0,7.73,-0.95),(3.87,7.73,-0.95),(3.87,7.73,0),(5.58,7.73,-0.95),(8.28,7.73,-0.95),(8.28,7.73,0),(5.58,7.73,0),(3.87,2.75,0),(5.58,2.75,0),(3.87,2.75,-0.95),(5.58,2.75,-0.95)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))])]),
      Transform(DEF='MuroTransetto1SX',translation=(-6.1035,-2.135,-31.17),rotation=(0,1,0,3.14),
        children=[
        Transform(DEF='MuroTransetto1EstSX',
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[1,2,18,19,4,5,13,9,-1,0,1,9,8,-1],solid=False,
              coord=Coordinate(point=[(0,0,0),(0,0,-0.95),(-3.87,0,-0.95),(-3.87,0,0),(-5.58,0,-0.95),(-8.28,0,-0.95),(-8.28,0,0),(-5.58,0,0),(0,7.73,0),(0,7.73,-0.95),(-3.87,7.73,-0.95),(-3.87,7.73,0),(-5.58,7.73,-0.95),(-8.28,7.73,-0.95),(-8.28,7.73,0),(-5.58,7.73,0),(-3.87,2.75,0),(-5.58,2.75,0),(-3.87,2.75,-0.95),(-5.58,2.75,-0.95)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='MuroTransetto1IntSX',
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,3,16,17,7,6,14,8,-1,2,3,16,18,-1,4,7,17,19,-1,16,17,19,18,-1],solid=False,
              coord=Coordinate(point=[(0,0,0),(0,0,-0.95),(-3.87,0,-0.95),(-3.87,0,0),(-5.58,0,-0.95),(-8.28,0,-0.95),(-8.28,0,0),(-5.58,0,0),(0,7.73,0),(0,7.73,-0.95),(-3.87,7.73,-0.95),(-3.87,7.73,0),(-5.58,7.73,-0.95),(-8.28,7.73,-0.95),(-8.28,7.73,0),(-5.58,7.73,0),(-3.87,2.75,0),(-5.58,2.75,0),(-3.87,2.75,-0.95),(-5.58,2.75,-0.95)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))])]),
      Transform(DEF='MuroTransetto3DX',
        children=[
        Transform(DEF='MuroTransetto3Int',translation=(16.6895,-2.135,-31.17),rotation=(0,1,0,1.57),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,3,2,1,9,6,7,8,-1,4,5,9,8,-1],solid=False,
              coord=Coordinate(point=[(0,0,0),(7.4,0,0),(7.4,7.73,0),(0,7.73,0),(2.94,1.91,0),(4.76,1.91,0),(4.76,4.66,0),(2.94,4.66,0),(2.94,0,0),(4.76,0,0)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='MuroTransetto3Est',translation=(17.6395,-2.135,-31.17),rotation=(0,1,0,1.57),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,3,2,1,9,6,7,8,-1,4,5,9,8,-1],solid=False,
              coord=Coordinate(point=[(0,0,0),(8.35,0,0),(8.35,7.73,0),(0,7.73,0),(2.94,1.91,0),(4.76,1.91,0),(4.76,4.66,0),(2.94,4.66,0),(2.94,0,0),(4.76,0,0)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))])]),
      Transform(DEF='MuroTransetto3SX',translation=(-22.79,0,0),
        children=[
        Transform(DEF='MuroTransetto3Int2',translation=(17.6395,-2.135,-31.17),rotation=(0,1,0,1.57),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,3,2,1,9,6,7,8,-1,4,5,9,8,-1],solid=False,
              coord=Coordinate(point=[(0,0,0),(7.4,0,0),(7.4,7.73,0),(0,7.73,0),(2.94,1.91,0),(4.76,1.91,0),(4.76,4.66,0),(2.94,4.66,0),(2.94,0,0),(4.76,0,0)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='MuroTransetto3Est2',translation=(16.6895,-2.135,-31.17),rotation=(0,1,0,1.57),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,3,2,1,9,6,7,8,-1,4,5,9,8,-1],solid=False,
              coord=Coordinate(point=[(0,0,0),(8.35,0,0),(8.35,7.73,0),(0,7.73,0),(2.94,1.91,0),(4.76,1.91,0),(4.76,4.66,0),(2.94,4.66,0),(2.94,0,0),(4.76,0,0)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))])]),
      Transform(DEF='MuroTransetto4DX',
        children=[
        Transform(DEF='MuroTransetto4Int',translation=(9.2995,-2.135,-39.52),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[3,7,17,9,8,16,6,2,-1],solid=False,
              coord=Coordinate(point=[(0,0,0),(8.34,0,0),(8.34,0,0.95),(0,0,0.95),(0,7.73,0),(8.34,7.73,0),(8.34,7.73,0.95),(0,7.73,0.95),(4.74,2.23,0.95),(2.65,2.23,0.95),(2.65,4.09,0.95),(4.74,4.09,0.95),(4.74,2.23,0.25),(2.65,2.23,0.25),(2.65,4.09,0.25),(4.74,4.09,0.25),(4.74,7.73,0.95),(2.65,7.73,0.95)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='NicchiaTransetto1',translation=(9.2995,-2.135,-39.52),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[9,13,14,10,-1,8,12,15,11,-1,8,9,13,12,-1,12,13,14,15,-1],solid=False,
              coord=Coordinate(point=[(0,0,0),(8.34,0,0),(8.34,0,0.95),(0,0,0.95),(0,7.73,0),(8.34,7.73,0),(8.34,7.73,0.95),(0,7.73,0.95),(4.74,2.23,0.95),(2.65,2.23,0.95),(2.65,4.09,0.95),(4.74,4.09,0.95),(4.74,2.23,0.25),(2.65,2.23,0.25),(2.65,5,0.25),(4.74,5,0.25),(4.74,7.73,0.95),(2.65,7.73,0.95)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='NicchiaTransetto2',translation=(12.995,1.955,-39.37),scale=(1.685,1,1),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,84,85,86,87,88,89,-1,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,90,91,92,93,94,95,-1,0,42,43,1,-1,1,43,44,2,-1,2,44,45,3,-1,3,45,46,4,-1,4,46,47,5,-1,5,47,48,6,-1,6,48,49,7,-1,7,49,50,8,-1,8,50,51,9,-1,9,51,52,10,-1,10,52,53,11,-1,11,53,54,12,-1,12,54,55,13,-1,13,55,56,14,-1,14,56,57,15,-1,15,57,58,16,-1,16,58,59,17,-1,17,59,60,18,-1,18,60,61,19,-1,19,61,62,20,-1,20,62,63,21,-1,21,63,64,22,-1,22,64,65,23,-1,23,65,66,24,-1,24,66,67,25,-1,25,67,68,26,-1,26,68,69,27,-1,27,69,70,28,-1,28,70,71,29,-1,29,71,72,30,-1,30,72,73,31,-1,31,73,74,32,-1,32,74,75,33,-1,33,75,76,34,-1,34,76,77,35,-1,35,77,78,36,-1,36,78,79,37,-1,37,79,80,38,-1,38,80,81,39,-1,39,81,82,40,-1,40,82,83,41,-1,84,41,83,90,-1,89,0,42,95,-1],solid=False,
              coord=Coordinate(point=[(0.62265,0.0,0),(0.6218712004456791,0.0311325,0),(0.6195289277144369,0.062265,0),(0.6156053358230011,0.0933975,0),(0.6100699153375784,0.12453,0),(0.6028782701290121,0.1556625,0),(0.5939702437622613,0.186795,0),(0.5832672005554145,0.2179275,0),(0.5706681512928509,0.24906,0),(0.5560442297549271,0.2801925,0),(0.5392307176663808,0.311325,0),(0.520015272077417,0.3424575,0),(0.49812000000000006,0.37359,0),(0.47317303441103875,0.4047225,0),(0.4446610411032206,0.435855,0),(0.4118442634585919,0.4669875,0),(0.37359000000000003,0.49812,0),(0.3280012404606879,0.5292525,0),(0.2714068427195601,0.560385,0),(0.19442240018513812,0.5915175,0),(0.0,0.62265,0),(-0.0,0.62265,0),(-0.19442240018513812,0.5915175,0),(-0.2714068427195601,0.560385,0),(-0.3280012404606879,0.5292525,0),(-0.37359000000000003,0.49812,0),(-0.4118442634585919,0.4669875,0),(-0.4446610411032206,0.435855,0),(-0.47317303441103875,0.4047225,0),(-0.49812000000000006,0.37359,0),(-0.520015272077417,0.3424575,0),(-0.5392307176663808,0.311325,0),(-0.5560442297549271,0.2801925,0),(-0.5706681512928509,0.24906,0),(-0.5832672005554145,0.2179275,0),(-0.5939702437622613,0.186795,0),(-0.6028782701290121,0.1556625,0),(-0.6100699153375784,0.12453,0),(-0.6156053358230011,0.0933975,0),(-0.6195289277144369,0.062265,0),(-0.6218712004456791,0.0311325,0),(-0.62265,0.0,0),(0.62265,0.0,0.8),(0.6218712004456791,0.0311325,0.8),(0.6195289277144369,0.062265,0.8),(0.6156053358230011,0.0933975,0.8),(0.6100699153375784,0.12453,0.8),(0.6028782701290121,0.1556625,0.8),(0.5939702437622613,0.186795,0.8),(0.5832672005554145,0.2179275,0.8),(0.5706681512928509,0.24906,0.8),(0.5560442297549271,0.2801925,0.8),(0.5392307176663808,0.311325,0.8),(0.520015272077417,0.3424575,0.8),(0.49812000000000006,0.37359,0.8),(0.47317303441103875,0.4047225,0.8),(0.4446610411032206,0.435855,0.8),(0.4118442634585919,0.4669875,0.8),(0.37359000000000003,0.49812,0.8),(0.3280012404606879,0.5292525,0.8),(0.2714068427195601,0.560385,0.8),(0.19442240018513812,0.5915175,0.8),(0.0,0.62265,0.8),(-0.0,0.62265,0.8),(-0.19442240018513812,0.5915175,0.8),(-0.2714068427195601,0.560385,0.8),(-0.3280012404606879,0.5292525,0.8),(-0.37359000000000003,0.49812,0.8),(-0.4118442634585919,0.4669875,0.8),(-0.4446610411032206,0.435855,0.8),(-0.47317303441103875,0.4047225,0.8),(-0.49812000000000006,0.37359,0.8),(-0.520015272077417,0.3424575,0.8),(-0.5392307176663808,0.311325,0.8),(-0.5560442297549271,0.2801925,0.8),(-0.5706681512928509,0.24906,0.8),(-0.5832672005554145,0.2179275,0.8),(-0.5939702437622613,0.186795,0.8),(-0.6028782701290121,0.1556625,0.8),(-0.6100699153375784,0.12453,0.8),(-0.6156053358230011,0.0933975,0.8),(-0.6195289277144369,0.062265,0.8),(-0.6218712004456791,0.0311325,0.8),(-0.62265,0.0,0.8),(-0.62265,0,0),(-0.62265,0,0),(-0.62265,1.15,0),(0.62265,1.15,0),(0.62265,0,0),(0.62265,0,0),(-0.62265,0,0.8),(-0.62265,0,0.8),(-0.62265,3.65,0.8),(0.62265,3.65,0.8),(0.62265,0,0.8),(0.62265,0,0.8)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='MuroTransetto4Est',translation=(9.2995,-2.135,-39.52),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1],solid=False,
              coord=Coordinate(point=[(0,0,0),(8.34,0,0),(8.34,0,0.95),(0,0,0.95),(0,7.73,0),(8.34,7.73,0),(8.34,7.73,0.95),(0,7.73,0.95)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))])]),
      Transform(DEF='MuroTransetto4SX',translation=(-7.05,0,0),
        children=[
        Transform(DEF='MuroTransetto4Int2',translation=(9.2995,-2.135,-39.52),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[3,7,17,9,8,16,6,2,-1],solid=False,
              coord=Coordinate(point=[(0,0,0),(-8.34,0,0),(-8.34,0,0.95),(0,0,0.95),(0,7.73,0),(-8.34,7.73,0),(-8.34,7.73,0.95),(0,7.73,0.95),(-4.74,2.23,0.95),(-2.65,2.23,0.95),(-2.65,4.09,0.95),(-4.74,4.09,0.95),(-4.74,2.23,0.25),(-2.65,2.23,0.25),(-2.65,4.09,0.25),(-4.74,4.09,0.25),(-4.74,7.73,0.95),(-2.65,7.73,0.95)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='NicchiaTransetto12',translation=(9.2995,-2.135,-39.52),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[9,13,14,10,-1,8,12,15,11,-1,8,9,13,12,-1,12,13,14,15,-1],solid=False,
              coord=Coordinate(point=[(0,0,0),(-8.34,0,0),(-8.34,0,0.95),(0,0,0.95),(0,7.73,0),(-8.34,7.73,0),(-8.34,7.73,0.95),(0,7.73,0.95),(-4.74,2.23,0.95),(-2.65,2.23,0.95),(-2.65,4.09,0.95),(-4.74,4.09,0.95),(-4.74,2.23,0.25),(-2.65,2.23,0.25),(-2.65,5,0.25),(-4.74,5,0.25),(-4.74,7.73,0.95),(-2.65,7.73,0.95)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='NicchiaTransetto22',translation=(5.6,1.955,-39.37),scale=(1.685,1,1),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,84,85,86,87,88,89,-1,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,90,91,92,93,94,95,-1,0,42,43,1,-1,1,43,44,2,-1,2,44,45,3,-1,3,45,46,4,-1,4,46,47,5,-1,5,47,48,6,-1,6,48,49,7,-1,7,49,50,8,-1,8,50,51,9,-1,9,51,52,10,-1,10,52,53,11,-1,11,53,54,12,-1,12,54,55,13,-1,13,55,56,14,-1,14,56,57,15,-1,15,57,58,16,-1,16,58,59,17,-1,17,59,60,18,-1,18,60,61,19,-1,19,61,62,20,-1,20,62,63,21,-1,21,63,64,22,-1,22,64,65,23,-1,23,65,66,24,-1,24,66,67,25,-1,25,67,68,26,-1,26,68,69,27,-1,27,69,70,28,-1,28,70,71,29,-1,29,71,72,30,-1,30,72,73,31,-1,31,73,74,32,-1,32,74,75,33,-1,33,75,76,34,-1,34,76,77,35,-1,35,77,78,36,-1,36,78,79,37,-1,37,79,80,38,-1,38,80,81,39,-1,39,81,82,40,-1,40,82,83,41,-1,84,41,83,90,-1,89,0,42,95,-1],solid=False,
              coord=Coordinate(point=[(0.62265,0.0,0),(0.6218712004456791,0.0311325,0),(0.6195289277144369,0.062265,0),(0.6156053358230011,0.0933975,0),(0.6100699153375784,0.12453,0),(0.6028782701290121,0.1556625,0),(0.5939702437622613,0.186795,0),(0.5832672005554145,0.2179275,0),(0.5706681512928509,0.24906,0),(0.5560442297549271,0.2801925,0),(0.5392307176663808,0.311325,0),(0.520015272077417,0.3424575,0),(0.49812000000000006,0.37359,0),(0.47317303441103875,0.4047225,0),(0.4446610411032206,0.435855,0),(0.4118442634585919,0.4669875,0),(0.37359000000000003,0.49812,0),(0.3280012404606879,0.5292525,0),(0.2714068427195601,0.560385,0),(0.19442240018513812,0.5915175,0),(0.0,0.62265,0),(-0.0,0.62265,0),(-0.19442240018513812,0.5915175,0),(-0.2714068427195601,0.560385,0),(-0.3280012404606879,0.5292525,0),(-0.37359000000000003,0.49812,0),(-0.4118442634585919,0.4669875,0),(-0.4446610411032206,0.435855,0),(-0.47317303441103875,0.4047225,0),(-0.49812000000000006,0.37359,0),(-0.520015272077417,0.3424575,0),(-0.5392307176663808,0.311325,0),(-0.5560442297549271,0.2801925,0),(-0.5706681512928509,0.24906,0),(-0.5832672005554145,0.2179275,0),(-0.5939702437622613,0.186795,0),(-0.6028782701290121,0.1556625,0),(-0.6100699153375784,0.12453,0),(-0.6156053358230011,0.0933975,0),(-0.6195289277144369,0.062265,0),(-0.6218712004456791,0.0311325,0),(-0.62265,0.0,0),(0.62265,0.0,0.8),(0.6218712004456791,0.0311325,0.8),(0.6195289277144369,0.062265,0.8),(0.6156053358230011,0.0933975,0.8),(0.6100699153375784,0.12453,0.8),(0.6028782701290121,0.1556625,0.8),(0.5939702437622613,0.186795,0.8),(0.5832672005554145,0.2179275,0.8),(0.5706681512928509,0.24906,0.8),(0.5560442297549271,0.2801925,0.8),(0.5392307176663808,0.311325,0.8),(0.520015272077417,0.3424575,0.8),(0.49812000000000006,0.37359,0.8),(0.47317303441103875,0.4047225,0.8),(0.4446610411032206,0.435855,0.8),(0.4118442634585919,0.4669875,0.8),(0.37359000000000003,0.49812,0.8),(0.3280012404606879,0.5292525,0.8),(0.2714068427195601,0.560385,0.8),(0.19442240018513812,0.5915175,0.8),(0.0,0.62265,0.8),(-0.0,0.62265,0.8),(-0.19442240018513812,0.5915175,0.8),(-0.2714068427195601,0.560385,0.8),(-0.3280012404606879,0.5292525,0.8),(-0.37359000000000003,0.49812,0.8),(-0.4118442634585919,0.4669875,0.8),(-0.4446610411032206,0.435855,0.8),(-0.47317303441103875,0.4047225,0.8),(-0.49812000000000006,0.37359,0.8),(-0.520015272077417,0.3424575,0.8),(-0.5392307176663808,0.311325,0.8),(-0.5560442297549271,0.2801925,0.8),(-0.5706681512928509,0.24906,0.8),(-0.5832672005554145,0.2179275,0.8),(-0.5939702437622613,0.186795,0.8),(-0.6028782701290121,0.1556625,0.8),(-0.6100699153375784,0.12453,0.8),(-0.6156053358230011,0.0933975,0.8),(-0.6195289277144369,0.062265,0.8),(-0.6218712004456791,0.0311325,0.8),(-0.62265,0.0,0.8),(-0.62265,0,0),(-0.62265,0,0),(-0.62265,1.15,0),(0.62265,1.15,0),(0.62265,0,0),(0.62265,0,0),(-0.62265,0,0.8),(-0.62265,0,0.8),(-0.62265,3.65,0.8),(0.62265,3.65,0.8),(0.62265,0,0.8),(0.62265,0,0.8)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='MuroTransetto4Est2',translation=(9.2995,-2.135,-39.52),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1],solid=False,
              coord=Coordinate(point=[(0,0,0),(-8.34,0,0),(-8.34,0,0.95),(0,0,0.95),(0,7.73,0),(-8.34,7.73,0),(-8.34,7.73,0.95),(0,7.73,0.95)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))])]),
      Transform(DEF='Presbiterio',translation=(0.95,0,-5.45),
        children=[
        Transform(DEF='Presbiterio1Int',translation=(9.295,-2.135,-39.52),rotation=(0,1,0,-1.57),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[6,15,12,11,5,4,13,14,-1,7,8,12,11,-1],solid=False,
              coord=Coordinate(point=[(0,0,0),(3.05,0,0),(4.96,0,0),(6.4,0,0),(6.4,0,0.95),(4.96,0,0.95),(0,0,0.95),(4.96,2.71,0),(3.05,2.71,0),(6.4,7.73,0),(0,7.73,0),(4.96,2.71,0.95),(3.05,2.71,0.95),(6.4,7.73,0.95),(0,7.73,0.95),(3.05,0,0.95)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='Presbiterio1Est',translation=(9.2995,-2.135,-39.52),rotation=(0,1,0,-1.57),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,8,7,2,3,9,10,-1],solid=False,
              coord=Coordinate(point=[(0,0,0),(3.05,0,0),(4.96,0,0),(6.4,0,0),(6.4,0,0.95),(4.96,0,0.95),(0,0,0.95),(4.96,2.71,0),(3.05,2.71,0),(6.4,7.73,0),(0,7.73,0),(4.96,2.71,0.95),(3.05,2.71,0.95),(6.4,7.73,0.95),(0,7.73,0.95),(3.05,0,0.95)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='Presbiterio2Int',translation=(0.344,-2.135,-39.52),rotation=(0,1,0,-1.57),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,17,9,8,12,13,21,4,-1,17,1,5,21,-1],solid=False,
              coord=Coordinate(point=[(-0.02,0,0),(6.4,0,0),(6.4,0,-0.95),(-0.02,0,-0.95),(-0.02,7.73,0),(6.4,7.73,0),(6.4,7.73,-0.95),(-0.02,7.73,-0.95),(2.75,3.87,0),(4.277,3.87,0),(4.277,3.87,-0.95),(2.75,3.87,-0.95),(2.75,6.36,0),(4.277,6.36,0),(4.277,6.36,-0.95),(2.75,6.36,-0.95),(2.75,0,0),(4.277,0,0),(4.277,0,-0.95),(2.75,0,-0.95),(2.75,7.73,0),(4.277,7.73,0),(4.277,7.73,-0.95),(2.75,7.73,-0.95)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='Presbiterio2Est',translation=(0.344,-2.135,-39.52),rotation=(0,1,0,-1.57),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[3,18,10,11,15,14,22,7,-1,18,22,6,2,-1],solid=False,
              coord=Coordinate(point=[(-0.02,0,0),(6.4,0,0),(6.4,0,-0.95),(-0.02,0,-0.95),(-0.02,7.73,0),(6.4,7.73,0),(6.4,7.73,-0.95),(-0.02,7.73,-0.95),(2.75,3.87,0),(4.277,3.87,0),(4.277,3.87,-0.95),(2.75,3.87,-0.95),(2.75,6.36,0),(4.277,6.36,0),(4.277,6.36,-0.95),(2.75,6.36,-0.95),(2.75,0,0),(4.277,0,0),(4.277,0,-0.95),(2.75,0,-0.95),(2.75,7.73,0),(4.277,7.73,0),(4.277,7.73,-0.95),(2.75,7.73,-0.95)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))])]),
      Transform(DEF='Retro',translation=(0.95,0,-8.623),
        children=[
        Transform(DEF='Retro1Est',translation=(9.295,-2.135,-39.52),rotation=(0,1,0,-1.57),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,8,9,2,3,13,12,-1,8,9,11,10,-1],solid=False,
              coord=Coordinate(point=[(0,0,0),(0.9,0,0),(2.53,0,0),(3.17,0,0),(0,0,0.95),(0.9,0,0.95),(2.53,0,0.95),(3.17,0,0.95),(0.9,2.25,0),(2.53,2.25,0),(0.9,2.25,0),(2.53,2.25,0),(0,7.73,0),(3.17,7.73,0),(3.17,7.73,0.95),(0,7.73,0.95)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='Retro1Int',translation=(9.295,-2.135,-39.52),rotation=(0,1,0,-1.57),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[4,5,10,11,6,7,15,14,-1],solid=False,
              coord=Coordinate(point=[(0,0,0),(0.9,0,0),(2.53,0,0),(3.17,0,0),(0,0,0.95),(0.9,0,0.95),(2.53,0,0.95),(3.17,0,0.95),(0.9,2.25,0),(2.53,2.25,0),(0.9,2.25,0.95),(2.53,2.25,0.95),(0,7.73,0),(3.17,7.73,0),(0,7.73,0.95),(3.17,7.73,0.95)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='Retro2Int',translation=(9.295,-2.135,-39.52),rotation=(0,1,0,3.14),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[5,11,10,4,-1,4,10,9,3,-1],solid=False,
              coord=Coordinate(point=[(0,0,0),(8.946,0,0),(8.946,0,-3.17),(7.996,0,-3.17),(7.996,0,-0.95),(0,0,-0.95),(0,7.73,0),(8.946,7.73,0),(8.946,7.73,-3.17),(7.996,7.73,-3.17),(7.996,7.73,-0.95),(0,7.73,-0.95)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='Retro2Est',translation=(9.295,-2.135,-39.52),rotation=(0,1,0,3.14),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,7,6,-1,1,2,8,7,-1],solid=False,
              coord=Coordinate(point=[(0,0,0),(8.946,0,0),(8.946,0,-3.17),(7.996,0,-3.17),(7.996,0,-0.95),(0,0,-0.95),(0,7.73,0),(8.946,7.73,0),(8.946,7.73,-3.17),(7.996,7.73,-3.17),(7.996,7.73,-0.95),(0,7.73,-0.95)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))])]),
      Transform(DEF='AbsideDX',translation=(18.827,0,-84.475),rotation=(0,1,0,3.14),
        children=[
        Transform(DEF='AbsideDXint',translation=(9.295,-2.135,-39.52),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,3,12,8,9,22,-1,11,22,1,2,-1],solid=False,
              coord=Coordinate(point=[(0,0,0),(2.1,0,0),(2.1,7.73,0),(0,7.73,0),(0,0,0.149),(2.1,0,0.149),(2.1,7.73,0.149),(0,7.73,0.149),(0.59,2.51,0),(1.49,2.51,0),(1.49,4.06,0),(1.49,7.73,0),(0.59,7.73,0),(0.59,4.06,0),(0.59,2.51,0.7),(1.49,2.51,0.7),(1.49,4.06,0.7),(0.59,4.06,0.7),(1.49,7.73,0.149),(0.59,7.73,0.149),(1.49,7.73,0.7),(0.59,7.73,0.7),(1.49,0,0),(1.49,0,0.149),(1.49,0,0.7)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='AbsideNicchia1',translation=(9.295,-2.135,-39.52),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[8,14,17,13,-1,9,15,16,10,-1,8,9,15,14,-1,14,15,16,17,-1],solid=False,
              coord=Coordinate(point=[(0,0,0),(2.1,0,0),(2.1,7.73,0),(0,7.73,0),(0,0,0.149),(2.1,0,0.149),(2.1,7.73,0.149),(0,7.73,0.149),(0.59,2.51,0),(1.49,2.51,0),(1.49,4.06,0),(1.49,7.73,0),(0.59,7.73,0),(0.59,4.06,0),(0.59,2.51,0.7),(1.49,2.51,0.7),(1.49,4.06,0.7),(0.59,4.06,0.7),(1.49,7.73,0.149),(0.59,7.73,0.149),(1.49,7.73,0.7),(0.59,7.73,0.7),(1.49,0,0),(1.49,0,0.149),(1.49,0,0.7)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='AbsideNicchia2',translation=(10.334,1.49,-38.821),rotation=(0,1,0,3.14),scale=(0.725,1,1),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,84,85,86,87,88,89,-1,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,90,91,92,93,94,95,-1,0,42,43,1,-1,1,43,44,2,-1,2,44,45,3,-1,3,45,46,4,-1,4,46,47,5,-1,5,47,48,6,-1,6,48,49,7,-1,7,49,50,8,-1,8,50,51,9,-1,9,51,52,10,-1,10,52,53,11,-1,11,53,54,12,-1,12,54,55,13,-1,13,55,56,14,-1,14,56,57,15,-1,15,57,58,16,-1,16,58,59,17,-1,17,59,60,18,-1,18,60,61,19,-1,19,61,62,20,-1,20,62,63,21,-1,21,63,64,22,-1,22,64,65,23,-1,23,65,66,24,-1,24,66,67,25,-1,25,67,68,26,-1,26,68,69,27,-1,27,69,70,28,-1,28,70,71,29,-1,29,71,72,30,-1,30,72,73,31,-1,31,73,74,32,-1,32,74,75,33,-1,33,75,76,34,-1,34,76,77,35,-1,35,77,78,36,-1,36,78,79,37,-1,37,79,80,38,-1,38,80,81,39,-1,39,81,82,40,-1,40,82,83,41,-1,84,41,83,90,-1,89,0,42,95,-1],solid=False,
              coord=Coordinate(point=[(0.62265,0.0,0),(0.6218712004456791,0.0311325,0),(0.6195289277144369,0.062265,0),(0.6156053358230011,0.0933975,0),(0.6100699153375784,0.12453,0),(0.6028782701290121,0.1556625,0),(0.5939702437622613,0.186795,0),(0.5832672005554145,0.2179275,0),(0.5706681512928509,0.24906,0),(0.5560442297549271,0.2801925,0),(0.5392307176663808,0.311325,0),(0.520015272077417,0.3424575,0),(0.49812000000000006,0.37359,0),(0.47317303441103875,0.4047225,0),(0.4446610411032206,0.435855,0),(0.4118442634585919,0.4669875,0),(0.37359000000000003,0.49812,0),(0.3280012404606879,0.5292525,0),(0.2714068427195601,0.560385,0),(0.19442240018513812,0.5915175,0),(0.0,0.62265,0),(-0.0,0.62265,0),(-0.19442240018513812,0.5915175,0),(-0.2714068427195601,0.560385,0),(-0.3280012404606879,0.5292525,0),(-0.37359000000000003,0.49812,0),(-0.4118442634585919,0.4669875,0),(-0.4446610411032206,0.435855,0),(-0.47317303441103875,0.4047225,0),(-0.49812000000000006,0.37359,0),(-0.520015272077417,0.3424575,0),(-0.5392307176663808,0.311325,0),(-0.5560442297549271,0.2801925,0),(-0.5706681512928509,0.24906,0),(-0.5832672005554145,0.2179275,0),(-0.5939702437622613,0.186795,0),(-0.6028782701290121,0.1556625,0),(-0.6100699153375784,0.12453,0),(-0.6156053358230011,0.0933975,0),(-0.6195289277144369,0.062265,0),(-0.6218712004456791,0.0311325,0),(-0.62265,0.0,0),(0.62265,0.0,0.7),(0.6218712004456791,0.0311325,0.7),(0.6195289277144369,0.062265,0.7),(0.6156053358230011,0.0933975,0.7),(0.6100699153375784,0.12453,0.7),(0.6028782701290121,0.1556625,0.7),(0.5939702437622613,0.186795,0.7),(0.5832672005554145,0.2179275,0.7),(0.5706681512928509,0.24906,0.7),(0.5560442297549271,0.2801925,0.7),(0.5392307176663808,0.311325,0.7),(0.520015272077417,0.3424575,0.7),(0.49812000000000006,0.37359,0.7),(0.47317303441103875,0.4047225,0.7),(0.4446610411032206,0.435855,0.7),(0.4118442634585919,0.4669875,0.7),(0.37359000000000003,0.49812,0.7),(0.3280012404606879,0.5292525,0.7),(0.2714068427195601,0.560385,0.7),(0.19442240018513812,0.5915175,0.7),(0.0,0.62265,0.7),(-0.0,0.62265,0.7),(-0.19442240018513812,0.5915175,0.7),(-0.2714068427195601,0.560385,0.7),(-0.3280012404606879,0.5292525,0.7),(-0.37359000000000003,0.49812,0.7),(-0.4118442634585919,0.4669875,0.7),(-0.4446610411032206,0.435855,0.7),(-0.47317303441103875,0.4047225,0.7),(-0.49812000000000006,0.37359,0.7),(-0.520015272077417,0.3424575,0.7),(-0.5392307176663808,0.311325,0.7),(-0.5560442297549271,0.2801925,0.7),(-0.5706681512928509,0.24906,0.7),(-0.5832672005554145,0.2179275,0.7),(-0.5939702437622613,0.186795,0.7),(-0.6028782701290121,0.1556625,0.7),(-0.6100699153375784,0.12453,0.7),(-0.6156053358230011,0.0933975,0.7),(-0.6195289277144369,0.062265,0.7),(-0.6218712004456791,0.0311325,0.7),(-0.62265,0.0,0.7),(-0.62265,0,0),(-0.62265,0,0),(-0.62265,-0.5,0),(0.62265,-0.5,0),(0.62265,0,0),(0.62265,0,0),(-0.62265,0,0.7),(-0.62265,0,0.7),(-0.62265,4.2,0.7),(0.62265,4.2,0.7),(0.62265,0,0.7),(0.62265,0,0.7)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='AbsideNicchia22',translation=(10.334,1.49,-39.372),rotation=(0,1,0,3.14),scale=(0.725,1,1),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,84,85,86,87,88,89,-1,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,90,91,92,93,94,95,-1,0,42,43,1,-1,1,43,44,2,-1,2,44,45,3,-1,3,45,46,4,-1,4,46,47,5,-1,5,47,48,6,-1,6,48,49,7,-1,7,49,50,8,-1,8,50,51,9,-1,9,51,52,10,-1,10,52,53,11,-1,11,53,54,12,-1,12,54,55,13,-1,13,55,56,14,-1,14,56,57,15,-1,15,57,58,16,-1,16,58,59,17,-1,17,59,60,18,-1,18,60,61,19,-1,19,61,62,20,-1,20,62,63,21,-1,21,63,64,22,-1,22,64,65,23,-1,23,65,66,24,-1,24,66,67,25,-1,25,67,68,26,-1,26,68,69,27,-1,27,69,70,28,-1,28,70,71,29,-1,29,71,72,30,-1,30,72,73,31,-1,31,73,74,32,-1,32,74,75,33,-1,33,75,76,34,-1,34,76,77,35,-1,35,77,78,36,-1,36,78,79,37,-1,37,79,80,38,-1,38,80,81,39,-1,39,81,82,40,-1,40,82,83,41,-1,84,41,83,90,-1,89,0,42,95,-1],solid=False,
              coord=Coordinate(point=[(0.62265,0.0,0),(0.6218712004456791,0.0311325,0),(0.6195289277144369,0.062265,0),(0.6156053358230011,0.0933975,0),(0.6100699153375784,0.12453,0),(0.6028782701290121,0.1556625,0),(0.5939702437622613,0.186795,0),(0.5832672005554145,0.2179275,0),(0.5706681512928509,0.24906,0),(0.5560442297549271,0.2801925,0),(0.5392307176663808,0.311325,0),(0.520015272077417,0.3424575,0),(0.49812000000000006,0.37359,0),(0.47317303441103875,0.4047225,0),(0.4446610411032206,0.435855,0),(0.4118442634585919,0.4669875,0),(0.37359000000000003,0.49812,0),(0.3280012404606879,0.5292525,0),(0.2714068427195601,0.560385,0),(0.19442240018513812,0.5915175,0),(0.0,0.62265,0),(-0.0,0.62265,0),(-0.19442240018513812,0.5915175,0),(-0.2714068427195601,0.560385,0),(-0.3280012404606879,0.5292525,0),(-0.37359000000000003,0.49812,0),(-0.4118442634585919,0.4669875,0),(-0.4446610411032206,0.435855,0),(-0.47317303441103875,0.4047225,0),(-0.49812000000000006,0.37359,0),(-0.520015272077417,0.3424575,0),(-0.5392307176663808,0.311325,0),(-0.5560442297549271,0.2801925,0),(-0.5706681512928509,0.24906,0),(-0.5832672005554145,0.2179275,0),(-0.5939702437622613,0.186795,0),(-0.6028782701290121,0.1556625,0),(-0.6100699153375784,0.12453,0),(-0.6156053358230011,0.0933975,0),(-0.6195289277144369,0.062265,0),(-0.6218712004456791,0.0311325,0),(-0.62265,0.0,0),(0.62265,0.0,0.149),(0.6218712004456791,0.0311325,0.149),(0.6195289277144369,0.062265,0.149),(0.6156053358230011,0.0933975,0.149),(0.6100699153375784,0.12453,0.149),(0.6028782701290121,0.1556625,0.149),(0.5939702437622613,0.186795,0.149),(0.5832672005554145,0.2179275,0.149),(0.5706681512928509,0.24906,0.149),(0.5560442297549271,0.2801925,0.149),(0.5392307176663808,0.311325,0.149),(0.520015272077417,0.3424575,0.149),(0.49812000000000006,0.37359,0.149),(0.47317303441103875,0.4047225,0.149),(0.4446610411032206,0.435855,0.149),(0.4118442634585919,0.4669875,0.149),(0.37359000000000003,0.49812,0.149),(0.3280012404606879,0.5292525,0.149),(0.2714068427195601,0.560385,0.149),(0.19442240018513812,0.5915175,0.149),(0.0,0.62265,0.149),(-0.0,0.62265,0.149),(-0.19442240018513812,0.5915175,0.149),(-0.2714068427195601,0.560385,0.149),(-0.3280012404606879,0.5292525,0.149),(-0.37359000000000003,0.49812,0.149),(-0.4118442634585919,0.4669875,0.149),(-0.4446610411032206,0.435855,0.149),(-0.47317303441103875,0.4047225,0.149),(-0.49812000000000006,0.37359,0.149),(-0.520015272077417,0.3424575,0.149),(-0.5392307176663808,0.311325,0.149),(-0.5560442297549271,0.2801925,0.149),(-0.5706681512928509,0.24906,0.149),(-0.5832672005554145,0.2179275,0.149),(-0.5939702437622613,0.186795,0.149),(-0.6028782701290121,0.1556625,0.149),(-0.6100699153375784,0.12453,0.149),(-0.6156053358230011,0.0933975,0.149),(-0.6195289277144369,0.062265,0.149),(-0.6218712004456791,0.0311325,0.149),(-0.62265,0.0,0.149),(-0.62265,0,0),(-0.62265,0,0),(-0.62265,3,0),(0.62265,3,0),(0.62265,0,0),(0.62265,0,0),(-0.62265,0,0.149),(-0.62265,0,0.149),(-0.62265,3.65,0.149),(0.62265,3.65,0.149),(0.62265,0,0.149),(0.62265,0,0.149)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='AbsideDXest',translation=(9.295,-2.135,-39.52),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[5,23,18,6,-1,4,26,19,7,-1,26,28,29,23,-1],solid=False,
              coord=Coordinate(point=[(0,0,0),(2.1,0,0),(2.1,7.73,0),(0,7.73,0),(0,0,0.149),(2.1,0,0.149),(2.1,7.73,0.149),(0,7.73,0.149),(0.59,2.51,0),(1.49,2.51,0),(1.49,4.06,0),(1.49,7.73,0),(0.59,7.73,0),(0.59,4.06,0),(0.59,2.51,0.7),(1.49,2.51,0.7),(1.49,4.06,0.7),(0.59,4.06,0.7),(1.49,7.73,0.149),(0.59,7.73,0.149),(1.49,7.73,0.7),(0.59,7.73,0.7),(1.49,0,0),(1.49,0,0.149),(1.49,0,0.7),(0.59,0,0),(0.59,0,0.149),(0.59,0,0.7),(0.59,2.51,0.149),(1.49,2.51,0.149),(1.49,4.06,0.149),(0.59,4.06,0.149)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))])]),
      Transform(DEF='Fronte',translation=(-2.963,-4.025,-5.599),
        children=[
        Transform(DEF='FronteInt',translation=(10.334,1.89,-39.372),rotation=(0,1,0,3.14),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,9,6,3,-1],solid=False,
              coord=Coordinate(point=[(0,0,0),(0,0,0.149),(0,0,0.7),(3.2,0,0),(3.2,0,0.149),(3.2,0,0.7),(3.2,2.22,0),(3.2,2.22,0.149),(3.2,2.22,0.7),(0,2.22,0),(0,2.22,0.149),(0,2.22,0.7),(0,4.61,0),(0,4.61,0.149),(0,4.61,0.7),(3.2,4.61,0),(3.2,4.61,0.149),(3.2,4.61,0.7),(0,5.14,0.7),(3.2,5.14,0.7)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='FronteNicchia',translation=(10.334,1.89,-39.372),rotation=(0,1,0,3.14),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[18,19,8,11,-1,15,17,11,9,-1,12,6,8,14,-1,9,6,8,11,-1],solid=False,
              coord=Coordinate(point=[(0,0,0),(0,0,0.149),(0,0,0.7),(3.2,0,0),(3.2,0,0.149),(3.2,0,0.7),(3.2,2.22,0),(3.2,2.22,0.149),(3.2,2.22,0.7),(0,2.22,0),(0,2.22,0.149),(0,2.22,0.7),(3.2,4.61,0),(3.2,4.61,0.149),(3.2,4.61,0.7),(0,4.61,0),(0,4.61,0.149),(0,4.61,0.7),(0,5.14,0.7),(3.2,5.14,0.7)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='FronteEst',translation=(10.334,1.89,-39.372),rotation=(0,1,0,3.14),scale=(0.725,1,1),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[1,4,10,7,-1],solid=False,
              coord=Coordinate(point=[(0,0,0),(0,0,0.149),(0,0,0.7),(3.2,0,0),(3.2,0,0.149),(3.2,0,0.7),(0,2.22,0),(0,2.22,0.149),(0,2.22,0.7),(3.2,2.22,0),(3.2,2.22,0.149),(3.2,2.22,0.7),(0,4.61,0),(0,4.61,0.149),(0,4.61,0.7),(3.2,4.61,0),(3.2,4.61,0.149),(3.2,4.61,0.7)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='CurvaNicchia1',translation=(9.9,6.5,-40.0725),scale=(0.71,0.71,1),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,84,85,86,87,-1,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,90,91,92,93,-1,0,42,43,1,-1,1,43,44,2,-1,2,44,45,3,-1,3,45,46,4,-1,4,46,47,5,-1,5,47,48,6,-1,6,48,49,7,-1,7,49,50,8,-1,8,50,51,9,-1,9,51,52,10,-1,10,52,53,11,-1,11,53,54,12,-1,12,54,55,13,-1,13,55,56,14,-1,14,56,57,15,-1,15,57,58,16,-1,16,58,59,17,-1,17,59,60,18,-1,18,60,61,19,-1,19,61,62,20,-1,20,62,63,21,-1,89,0,42,95,-1],solid=False,
              coord=Coordinate(point=[(0.62265,0.0,0),(0.6218712004456791,0.0311325,0),(0.6195289277144369,0.062265,0),(0.6156053358230011,0.0933975,0),(0.6100699153375784,0.12453,0),(0.6028782701290121,0.1556625,0),(0.5939702437622613,0.186795,0),(0.5832672005554145,0.2179275,0),(0.5706681512928509,0.24906,0),(0.5560442297549271,0.2801925,0),(0.5392307176663808,0.311325,0),(0.520015272077417,0.3424575,0),(0.49812000000000006,0.37359,0),(0.47317303441103875,0.4047225,0),(0.4446610411032206,0.435855,0),(0.4118442634585919,0.4669875,0),(0.37359000000000003,0.49812,0),(0.3280012404606879,0.5292525,0),(0.2714068427195601,0.560385,0),(0.19442240018513812,0.5915175,0),(0.0,0.62265,0),(0.0,0.62265,0),(-0.19442240018513812,0.5915175,0),(-0.2714068427195601,0.560385,0),(-0.3280012404606879,0.5292525,0),(-0.37359000000000003,0.49812,0),(-0.4118442634585919,0.4669875,0),(-0.4446610411032206,0.435855,0),(-0.47317303441103875,0.4047225,0),(-0.49812000000000006,0.37359,0),(-0.520015272077417,0.3424575,0),(-0.5392307176663808,0.311325,0),(-0.5560442297549271,0.2801925,0),(-0.5706681512928509,0.24906,0),(-0.5832672005554145,0.2179275,0),(-0.5939702437622613,0.186795,0),(-0.6028782701290121,0.1556625,0),(-0.6100699153375784,0.12453,0),(-0.6156053358230011,0.0933975,0),(-0.6195289277144369,0.062265,0),(-0.6218712004456791,0.0311325,0),(-0.62265,1,0),(0.62265,0.0,0.7),(.6218712004456791,0.0311325,0.7),(.6195289277144369,0.062265,0.7),(.6156053358230011,0.0933975,0.7),(.6100699153375784,0.12453,0.7),(.6028782701290121,0.1556625,0.7),(.5939702437622613,0.186795,0.7),(.5832672005554145,0.2179275,0.7),(.5706681512928509,0.24906,0.7),(.5560442297549271,0.2801925,0.7),(.5392307176663808,0.311325,0.7),(.520015272077417,0.3424575,0.7),(.49812000000000006,0.37359,0.7),(.47317303441103875,0.4047225,0.7),(.4446610411032206,0.435855,0.7),(.4118442634585919,0.4669875,0.7),(.37359000000000003,0.49812,0.7),(.3280012404606879,0.5292525,0.7),(.2714068427195601,0.560385,0.7),(.19442240018513812,0.5915175,0.7),(.0,0.62265,0.7),(0,0.62265,0.7),(-0.19442240018513812,0.5915175,0.7),(-0.2714068427195601,0.560385,0.7),(-0.3280012404606879,0.5292525,0.7),(-0.37359000000000003,0.49812,0.7),(-0.4118442634585919,0.4669875,0.7),(-0.4446610411032206,0.435855,0.7),(-0.47317303441103875,0.4047225,0.7),(-0.49812000000000006,0.37359,0.7),(-0.520015272077417,0.3424575,0.7),(-0.5392307176663808,0.311325,0.7),(-0.5560442297549271,0.2801925,0.7),(-0.5706681512928509,0.24906,0.7),(-0.5832672005554145,0.2179275,0.7),(-0.5939702437622613,0.186795,0.7),(-0.6028782701290121,0.1556625,0.7),(-0.6100699153375784,0.12453,0.7),(-0.6156053358230011,0.0933975,0.7),(-0.6195289277144369,0.062265,0.7),(-0.6218712004456791,0.0311325,0.7),(-0.62265,0.0,0.7),(0,0.62265,0),(0.62265,0.62265,0),(0.62265,0,0),(0.62265,0,0),(0.62265,0,0),(0.62265,0,0),(0,0.62265,0.7),(0.62265,0.62265,0.7),(0.62265,0,0.7),(0.62265,0,0.7),(0.62265,0,0.7)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='CurvaNicchia1Est',translation=(9.9,6.5,-39.5215),scale=(0.71,0.71,1),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,84,85,86,87,-1,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,90,91,92,93,-1,0,42,43,1,-1,1,43,44,2,-1,2,44,45,3,-1,3,45,46,4,-1,4,46,47,5,-1,5,47,48,6,-1,6,48,49,7,-1,7,49,50,8,-1,8,50,51,9,-1,9,51,52,10,-1,10,52,53,11,-1,11,53,54,12,-1,12,54,55,13,-1,13,55,56,14,-1,14,56,57,15,-1,15,57,58,16,-1,16,58,59,17,-1,17,59,60,18,-1,18,60,61,19,-1,19,61,62,20,-1,20,62,63,21,-1,89,0,42,95,-1],solid=False,
              coord=Coordinate(point=[(0.62265,0.0,0),(0.6218712004456791,0.0311325,0),(0.6195289277144369,0.062265,0),(0.6156053358230011,0.0933975,0),(0.6100699153375784,0.12453,0),(0.6028782701290121,0.1556625,0),(0.5939702437622613,0.186795,0),(0.5832672005554145,0.2179275,0),(0.5706681512928509,0.24906,0),(0.5560442297549271,0.2801925,0),(0.5392307176663808,0.311325,0),(0.520015272077417,0.3424575,0),(0.49812000000000006,0.37359,0),(0.47317303441103875,0.4047225,0),(0.4446610411032206,0.435855,0),(0.4118442634585919,0.4669875,0),(0.37359000000000003,0.49812,0),(0.3280012404606879,0.5292525,0),(0.2714068427195601,0.560385,0),(0.19442240018513812,0.5915175,0),(0.0,0.62265,0),(0.0,0.62265,0),(-0.19442240018513812,0.5915175,0),(-0.2714068427195601,0.560385,0),(-0.3280012404606879,0.5292525,0),(-0.37359000000000003,0.49812,0),(-0.4118442634585919,0.4669875,0),(-0.4446610411032206,0.435855,0),(-0.47317303441103875,0.4047225,0),(-0.49812000000000006,0.37359,0),(-0.520015272077417,0.3424575,0),(-0.5392307176663808,0.311325,0),(-0.5560442297549271,0.2801925,0),(-0.5706681512928509,0.24906,0),(-0.5832672005554145,0.2179275,0),(-0.5939702437622613,0.186795,0),(-0.6028782701290121,0.1556625,0),(-0.6100699153375784,0.12453,0),(-0.6156053358230011,0.0933975,0),(-0.6195289277144369,0.062265,0),(-0.6218712004456791,0.0311325,0),(-0.62265,1,0),(0.62265,0.0,0.149),(.6218712004456791,0.0311325,0.149),(.6195289277144369,0.062265,0.149),(.6156053358230011,0.0933975,0.149),(.6100699153375784,0.12453,0.149),(.6028782701290121,0.1556625,0.149),(.5939702437622613,0.186795,0.149),(.5832672005554145,0.2179275,0.149),(.5706681512928509,0.24906,0.149),(.5560442297549271,0.2801925,0.149),(.5392307176663808,0.311325,0.149),(.520015272077417,0.3424575,0.149),(.49812000000000006,0.37359,0.149),(.47317303441103875,0.4047225,0.149),(.4446610411032206,0.435855,0.149),(.4118442634585919,0.4669875,0.149),(.37359000000000003,0.49812,0.149),(.3280012404606879,0.5292525,0.149),(.2714068427195601,0.560385,0.149),(.19442240018513812,0.5915175,0.149),(.0,0.62265,0.149),(0,0.62265,0.149),(-0.19442240018513812,0.5915175,0.149),(-0.2714068427195601,0.560385,0.149),(-0.3280012404606879,0.5292525,0.149),(-0.37359000000000003,0.49812,0.149),(-0.4118442634585919,0.4669875,0.149),(-0.4446610411032206,0.435855,0.149),(-0.47317303441103875,0.4047225,0.149),(-0.49812000000000006,0.37359,0.149),(-0.520015272077417,0.3424575,0.149),(-0.5392307176663808,0.311325,0.149),(-0.5560442297549271,0.2801925,0.149),(-0.5706681512928509,0.24906,0.149),(-0.5832672005554145,0.2179275,0.149),(-0.5939702437622613,0.186795,0.149),(-0.6028782701290121,0.1556625,0.149),(-0.6100699153375784,0.12453,0.149),(-0.6156053358230011,0.0933975,0.149),(-0.6195289277144369,0.062265,0.149),(-0.6218712004456791,0.0311325,0.149),(-0.62265,0.0,0.149),(0,0.62265,0),(0.62265,0.62265,0),(0.62265,0,0),(0.62265,0,0),(0.62265,0,0),(0.62265,0,0),(0,0.62265,0.149),(0.62265,0.62265,0.149),(0.62265,0,0.149),(0.62265,0,0.149),(0.62265,0,0.149)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='CurvaNicchia2',translation=(7.575,6.5,-39.3725),rotation=(0,1,0,3.14),scale=(0.71,0.71,1),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,84,85,86,87,-1,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,90,91,92,93,-1,0,42,43,1,-1,1,43,44,2,-1,2,44,45,3,-1,3,45,46,4,-1,4,46,47,5,-1,5,47,48,6,-1,6,48,49,7,-1,7,49,50,8,-1,8,50,51,9,-1,9,51,52,10,-1,10,52,53,11,-1,11,53,54,12,-1,12,54,55,13,-1,13,55,56,14,-1,14,56,57,15,-1,15,57,58,16,-1,16,58,59,17,-1,17,59,60,18,-1,18,60,61,19,-1,19,61,62,20,-1,20,62,63,21,-1,89,0,42,95,-1],solid=False,
              coord=Coordinate(point=[(0.62265,0.0,0),(0.6218712004456791,0.0311325,0),(0.6195289277144369,0.062265,0),(0.6156053358230011,0.0933975,0),(0.6100699153375784,0.12453,0),(0.6028782701290121,0.1556625,0),(0.5939702437622613,0.186795,0),(0.5832672005554145,0.2179275,0),(0.5706681512928509,0.24906,0),(0.5560442297549271,0.2801925,0),(0.5392307176663808,0.311325,0),(0.520015272077417,0.3424575,0),(0.49812000000000006,0.37359,0),(0.47317303441103875,0.4047225,0),(0.4446610411032206,0.435855,0),(0.4118442634585919,0.4669875,0),(0.37359000000000003,0.49812,0),(0.3280012404606879,0.5292525,0),(0.2714068427195601,0.560385,0),(0.19442240018513812,0.5915175,0),(0.0,0.62265,0),(0.0,0.62265,0),(-0.19442240018513812,0.5915175,0),(-0.2714068427195601,0.560385,0),(-0.3280012404606879,0.5292525,0),(-0.37359000000000003,0.49812,0),(-0.4118442634585919,0.4669875,0),(-0.4446610411032206,0.435855,0),(-0.47317303441103875,0.4047225,0),(-0.49812000000000006,0.37359,0),(-0.520015272077417,0.3424575,0),(-0.5392307176663808,0.311325,0),(-0.5560442297549271,0.2801925,0),(-0.5706681512928509,0.24906,0),(-0.5832672005554145,0.2179275,0),(-0.5939702437622613,0.186795,0),(-0.6028782701290121,0.1556625,0),(-0.6100699153375784,0.12453,0),(-0.6156053358230011,0.0933975,0),(-0.6195289277144369,0.062265,0),(-0.6218712004456791,0.0311325,0),(-0.62265,1,0),(0.62265,0.0,0.7),(.6218712004456791,0.0311325,0.7),(.6195289277144369,0.062265,0.7),(.6156053358230011,0.0933975,0.7),(.6100699153375784,0.12453,0.7),(.6028782701290121,0.1556625,0.7),(.5939702437622613,0.186795,0.7),(.5832672005554145,0.2179275,0.7),(.5706681512928509,0.24906,0.7),(.5560442297549271,0.2801925,0.7),(.5392307176663808,0.311325,0.7),(.520015272077417,0.3424575,0.7),(.49812000000000006,0.37359,0.7),(.47317303441103875,0.4047225,0.7),(.4446610411032206,0.435855,0.7),(.4118442634585919,0.4669875,0.7),(.37359000000000003,0.49812,0.7),(.3280012404606879,0.5292525,0.7),(.2714068427195601,0.560385,0.7),(.19442240018513812,0.5915175,0.7),(.0,0.62265,0.7),(0,0.62265,0.7),(-0.19442240018513812,0.5915175,0.7),(-0.2714068427195601,0.560385,0.7),(-0.3280012404606879,0.5292525,0.7),(-0.37359000000000003,0.49812,0.7),(-0.4118442634585919,0.4669875,0.7),(-0.4446610411032206,0.435855,0.7),(-0.47317303441103875,0.4047225,0.7),(-0.49812000000000006,0.37359,0.7),(-0.520015272077417,0.3424575,0.7),(-0.5392307176663808,0.311325,0.7),(-0.5560442297549271,0.2801925,0.7),(-0.5706681512928509,0.24906,0.7),(-0.5832672005554145,0.2179275,0.7),(-0.5939702437622613,0.186795,0.7),(-0.6028782701290121,0.1556625,0.7),(-0.6100699153375784,0.12453,0.7),(-0.6156053358230011,0.0933975,0.7),(-0.6195289277144369,0.062265,0.7),(-0.6218712004456791,0.0311325,0.7),(-0.62265,0.0,0.7),(0,0.62265,0),(0.62265,0.62265,0),(0.62265,0,0),(0.62265,0,0),(0.62265,0,0),(0.62265,0,0),(0,0.62265,0.7),(0.62265,0.62265,0.7),(0.62265,0,0.7),(0.62265,0,0.7),(0.62265,0,0.7)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='CurvaNicchia2Est',translation=(7.575,6.5,-39.3725),rotation=(0,1,0,3.14),scale=(0.71,0.71,1),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,84,85,86,87,-1,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,90,91,92,93,-1,0,42,43,1,-1,1,43,44,2,-1,2,44,45,3,-1,3,45,46,4,-1,4,46,47,5,-1,5,47,48,6,-1,6,48,49,7,-1,7,49,50,8,-1,8,50,51,9,-1,9,51,52,10,-1,10,52,53,11,-1,11,53,54,12,-1,12,54,55,13,-1,13,55,56,14,-1,14,56,57,15,-1,15,57,58,16,-1,16,58,59,17,-1,17,59,60,18,-1,18,60,61,19,-1,19,61,62,20,-1,20,62,63,21,-1,89,0,42,95,-1],solid=False,
              coord=Coordinate(point=[(0.62265,0.0,0),(0.6218712004456791,0.0311325,0),(0.6195289277144369,0.062265,0),(0.6156053358230011,0.0933975,0),(0.6100699153375784,0.12453,0),(0.6028782701290121,0.1556625,0),(0.5939702437622613,0.186795,0),(0.5832672005554145,0.2179275,0),(0.5706681512928509,0.24906,0),(0.5560442297549271,0.2801925,0),(0.5392307176663808,0.311325,0),(0.520015272077417,0.3424575,0),(0.49812000000000006,0.37359,0),(0.47317303441103875,0.4047225,0),(0.4446610411032206,0.435855,0),(0.4118442634585919,0.4669875,0),(0.37359000000000003,0.49812,0),(0.3280012404606879,0.5292525,0),(0.2714068427195601,0.560385,0),(0.19442240018513812,0.5915175,0),(0.0,0.62265,0),(0.0,0.62265,0),(-0.19442240018513812,0.5915175,0),(-0.2714068427195601,0.560385,0),(-0.3280012404606879,0.5292525,0),(-0.37359000000000003,0.49812,0),(-0.4118442634585919,0.4669875,0),(-0.4446610411032206,0.435855,0),(-0.47317303441103875,0.4047225,0),(-0.49812000000000006,0.37359,0),(-0.520015272077417,0.3424575,0),(-0.5392307176663808,0.311325,0),(-0.5560442297549271,0.2801925,0),(-0.5706681512928509,0.24906,0),(-0.5832672005554145,0.2179275,0),(-0.5939702437622613,0.186795,0),(-0.6028782701290121,0.1556625,0),(-0.6100699153375784,0.12453,0),(-0.6156053358230011,0.0933975,0),(-0.6195289277144369,0.062265,0),(-0.6218712004456791,0.0311325,0),(-0.62265,1,0),(0.62265,0.0,0.149),(.6218712004456791,0.0311325,0.149),(.6195289277144369,0.062265,0.149),(.6156053358230011,0.0933975,0.149),(.6100699153375784,0.12453,0.149),(.6028782701290121,0.1556625,0.149),(.5939702437622613,0.186795,0.149),(.5832672005554145,0.2179275,0.149),(.5706681512928509,0.24906,0.149),(.5560442297549271,0.2801925,0.149),(.5392307176663808,0.311325,0.149),(.520015272077417,0.3424575,0.149),(.49812000000000006,0.37359,0.149),(.47317303441103875,0.4047225,0.149),(.4446610411032206,0.435855,0.149),(.4118442634585919,0.4669875,0.149),(.37359000000000003,0.49812,0.149),(.3280012404606879,0.5292525,0.149),(.2714068427195601,0.560385,0.149),(.19442240018513812,0.5915175,0.149),(.0,0.62265,0.149),(0,0.62265,0.149),(-0.19442240018513812,0.5915175,0.149),(-0.2714068427195601,0.560385,0.149),(-0.3280012404606879,0.5292525,0.149),(-0.37359000000000003,0.49812,0.149),(-0.4118442634585919,0.4669875,0.149),(-0.4446610411032206,0.435855,0.149),(-0.47317303441103875,0.4047225,0.149),(-0.49812000000000006,0.37359,0.149),(-0.520015272077417,0.3424575,0.149),(-0.5392307176663808,0.311325,0.149),(-0.5560442297549271,0.2801925,0.149),(-0.5706681512928509,0.24906,0.149),(-0.5832672005554145,0.2179275,0.149),(-0.5939702437622613,0.186795,0.149),(-0.6028782701290121,0.1556625,0.149),(-0.6100699153375784,0.12453,0.149),(-0.6156053358230011,0.0933975,0.149),(-0.6195289277144369,0.062265,0.149),(-0.6218712004456791,0.0311325,0.149),(-0.62265,0.0,0.149),(0,0.62265,0),(0.62265,0.62265,0),(0.62265,0,0),(0.62265,0,0),(0.62265,0,0),(0.62265,0,0),(0,0.62265,0.149),(0.62265,0.62265,0.149),(0.62265,0,0.149),(0.62265,0,0.149),(0.62265,0,0.149)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='AngoliFronte',translation=(9.904,6.94,-39.372),rotation=(0,1,0,3.14),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[6,7,10,11,-1,0,6,7,1,-1,1,2,8,7,-1,3,4,10,9,-1,5,11,10,4,-1,12,13,14,2,1,0,-1,3,15,16,17,5,4,-1],solid=False,
              coord=Coordinate(point=[(0,0,0),(0,0.3,0),(0.3,0.3,0),(2.03,0.3,0),(2.33,0.3,0),(2.33,0,0),(0,0,0.7),(0,0.3,0.7),(0.3,0.3,0.7),(2.03,0.3,0.7),(2.33,0.3,0.7),(2.33,0,0.7),(-0.445,0,0),(-0.445,2.2,0),(0.3,2.2,0),(2.03,2.2,0),(2.765,2.2,0),(2.765,0,0),(0,5.14,0.7),(3.2,5.14,0.7)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='AngoliFronteEst',translation=(9.904,6.94,-39.521),rotation=(0,1,0,3.14),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[12,13,14,2,1,0,-1,3,15,16,17,5,4,-1],solid=False,
              coord=Coordinate(point=[(0,0,0),(0,0.3,0),(0.3,0.3,0),(2.03,0.3,0),(2.33,0.3,0),(2.33,0,0),(0,0,0.7),(0,0.3,0.7),(0.3,0.3,0.7),(2.03,0.3,0.7),(2.33,0.3,0.7),(2.33,0,0.7),(-0.445,0,0),(-0.445,2.7,0),(0.3,2.7,0),(2.03,2.7,0),(2.765,2.7,0),(2.765,0,0)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='ArcoFronte',translation=(8.738,7.235,-40.08),scale=(1.394,0.82,1),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,84,85,86,87,88,89,-1,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,90,91,92,93,94,95,-1,0,42,43,1,-1,1,43,44,2,-1,2,44,45,3,-1,3,45,46,4,-1,4,46,47,5,-1,5,47,48,6,-1,6,48,49,7,-1,7,49,50,8,-1,8,50,51,9,-1,9,51,52,10,-1,10,52,53,11,-1,11,53,54,12,-1,12,54,55,13,-1,13,55,56,14,-1,14,56,57,15,-1,15,57,58,16,-1,16,58,59,17,-1,17,59,60,18,-1,18,60,61,19,-1,19,61,62,20,-1,20,62,63,21,-1,21,63,64,22,-1,22,64,65,23,-1,23,65,66,24,-1,24,66,67,25,-1,25,67,68,26,-1,26,68,69,27,-1,27,69,70,28,-1,28,70,71,29,-1,29,71,72,30,-1,30,72,73,31,-1,31,73,74,32,-1,32,74,75,33,-1,33,75,76,34,-1,34,76,77,35,-1,35,77,78,36,-1,36,78,79,37,-1,37,79,80,38,-1,38,80,81,39,-1,39,81,82,40,-1,40,82,83,41,-1,84,41,83,90,-1,89,0,42,95,-1],solid=False,
              coord=Coordinate(point=[(0.62265,0.0,0),(0.6218712004456791,0.0311325,0),(0.6195289277144369,0.062265,0),(0.6156053358230011,0.0933975,0),(0.6100699153375784,0.12453,0),(0.6028782701290121,0.1556625,0),(0.5939702437622613,0.186795,0),(0.5832672005554145,0.2179275,0),(0.5706681512928509,0.24906,0),(0.5560442297549271,0.2801925,0),(0.5392307176663808,0.311325,0),(0.520015272077417,0.3424575,0),(0.49812000000000006,0.37359,0),(0.47317303441103875,0.4047225,0),(0.4446610411032206,0.435855,0),(0.4118442634585919,0.4669875,0),(0.37359000000000003,0.49812,0),(0.3280012404606879,0.5292525,0),(0.2714068427195601,0.560385,0),(0.19442240018513812,0.5915175,0),(0.0,0.62265,0),(-0.0,0.62265,0),(-0.19442240018513812,0.5915175,0),(-0.2714068427195601,0.560385,0),(-0.3280012404606879,0.5292525,0),(-0.37359000000000003,0.49812,0),(-0.4118442634585919,0.4669875,0),(-0.4446610411032206,0.435855,0),(-0.47317303441103875,0.4047225,0),(-0.49812000000000006,0.37359,0),(-0.520015272077417,0.3424575,0),(-0.5392307176663808,0.311325,0),(-0.5560442297549271,0.2801925,0),(-0.5706681512928509,0.24906,0),(-0.5832672005554145,0.2179275,0),(-0.5939702437622613,0.186795,0),(-0.6028782701290121,0.1556625,0),(-0.6100699153375784,0.12453,0),(-0.6156053358230011,0.0933975,0),(-0.6195289277144369,0.062265,0),(-0.6218712004456791,0.0311325,0),(-0.62265,0.0,0),(0.62265,0.0,0.7),(0.6218712004456791,0.0311325,0.7),(0.6195289277144369,0.062265,0.7),(0.6156053358230011,0.0933975,0.7),(0.6100699153375784,0.12453,0.7),(0.6028782701290121,0.1556625,0.7),(0.5939702437622613,0.186795,0.7),(0.5832672005554145,0.2179275,0.7),(0.5706681512928509,0.24906,0.7),(0.5560442297549271,0.2801925,0.7),(0.5392307176663808,0.311325,0.7),(0.520015272077417,0.3424575,0.7),(0.49812000000000006,0.37359,0.7),(0.47317303441103875,0.4047225,0.7),(0.4446610411032206,0.435855,0.7),(0.4118442634585919,0.4669875,0.7),(0.37359000000000003,0.49812,0.7),(0.3280012404606879,0.5292525,0.7),(0.2714068427195601,0.560385,0.7),(0.19442240018513812,0.5915175,0.7),(0.0,0.62265,0.7),(-0.0,0.62265,0.7),(-0.19442240018513812,0.5915175,0.7),(-0.2714068427195601,0.560385,0.7),(-0.3280012404606879,0.5292525,0.7),(-0.37359000000000003,0.49812,0.7),(-0.4118442634585919,0.4669875,0.7),(-0.4446610411032206,0.435855,0.7),(-0.47317303441103875,0.4047225,0.7),(-0.49812000000000006,0.37359,0.7),(-0.520015272077417,0.3424575,0.7),(-0.5392307176663808,0.311325,0.7),(-0.5560442297549271,0.2801925,0.7),(-0.5706681512928509,0.24906,0.7),(-0.5832672005554145,0.2179275,0.7),(-0.5939702437622613,0.186795,0.7),(-0.6028782701290121,0.1556625,0.7),(-0.6100699153375784,0.12453,0.7),(-0.6156053358230011,0.0933975,0.7),(-0.6195289277144369,0.062265,0.7),(-0.6218712004456791,0.0311325,0.7),(-0.62265,0.0,0.7),(-0.62265,0,0),(-0.62265,0,0),(-0.62265,0,0),(0.62265,0,0),(0.62265,0,0),(0.62265,0,0),(-0.62265,0,0.7),(-0.62265,0,0.7),(-0.62265,2.6,0.7),(0.62265,2.6,0.7),(0.62265,0,0.7),(0.62265,0,0.7)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='ArcoFronte2',translation=(8.738,7.415,-39.529),scale=(1.394,0.82,1),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,84,85,86,87,88,89,-1,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,90,91,92,93,94,95,-1,0,42,43,1,-1,1,43,44,2,-1,2,44,45,3,-1,3,45,46,4,-1,4,46,47,5,-1,5,47,48,6,-1,6,48,49,7,-1,7,49,50,8,-1,8,50,51,9,-1,9,51,52,10,-1,10,52,53,11,-1,11,53,54,12,-1,12,54,55,13,-1,13,55,56,14,-1,14,56,57,15,-1,15,57,58,16,-1,16,58,59,17,-1,17,59,60,18,-1,18,60,61,19,-1,19,61,62,20,-1,20,62,63,21,-1,21,63,64,22,-1,22,64,65,23,-1,23,65,66,24,-1,24,66,67,25,-1,25,67,68,26,-1,26,68,69,27,-1,27,69,70,28,-1,28,70,71,29,-1,29,71,72,30,-1,30,72,73,31,-1,31,73,74,32,-1,32,74,75,33,-1,33,75,76,34,-1,34,76,77,35,-1,35,77,78,36,-1,36,78,79,37,-1,37,79,80,38,-1,38,80,81,39,-1,39,81,82,40,-1,40,82,83,41,-1,84,41,83,90,-1,89,0,42,95,-1],solid=False,
              coord=Coordinate(point=[(0.62265,0.0,0),(0.6218712004456791,0.0311325,0),(0.6195289277144369,0.062265,0),(0.6156053358230011,0.0933975,0),(0.6100699153375784,0.12453,0),(0.6028782701290121,0.1556625,0),(0.5939702437622613,0.186795,0),(0.5832672005554145,0.2179275,0),(0.5706681512928509,0.24906,0),(0.5560442297549271,0.2801925,0),(0.5392307176663808,0.311325,0),(0.520015272077417,0.3424575,0),(0.49812000000000006,0.37359,0),(0.47317303441103875,0.4047225,0),(0.4446610411032206,0.435855,0),(0.4118442634585919,0.4669875,0),(0.37359000000000003,0.49812,0),(0.3280012404606879,0.5292525,0),(0.2714068427195601,0.560385,0),(0.19442240018513812,0.5915175,0),(0.0,0.62265,0),(-0.0,0.62265,0),(-0.19442240018513812,0.5915175,0),(-0.2714068427195601,0.560385,0),(-0.3280012404606879,0.5292525,0),(-0.37359000000000003,0.49812,0),(-0.4118442634585919,0.4669875,0),(-0.4446610411032206,0.435855,0),(-0.47317303441103875,0.4047225,0),(-0.49812000000000006,0.37359,0),(-0.520015272077417,0.3424575,0),(-0.5392307176663808,0.311325,0),(-0.5560442297549271,0.2801925,0),(-0.5706681512928509,0.24906,0),(-0.5832672005554145,0.2179275,0),(-0.5939702437622613,0.186795,0),(-0.6028782701290121,0.1556625,0),(-0.6100699153375784,0.12453,0),(-0.6156053358230011,0.0933975,0),(-0.6195289277144369,0.062265,0),(-0.6218712004456791,0.0311325,0),(-0.62265,0.0,0),(0.62265,0.0,0.149),(0.6218712004456791,0.0311325,0.149),(0.6195289277144369,0.062265,0.149),(0.6156053358230011,0.0933975,0.149),(0.6100699153375784,0.12453,0.149),(0.6028782701290121,0.1556625,0.149),(0.5939702437622613,0.186795,0.149),(0.5832672005554145,0.2179275,0.149),(0.5706681512928509,0.24906,0.149),(0.5560442297549271,0.2801925,0.149),(0.5392307176663808,0.311325,0.149),(0.520015272077417,0.3424575,0.149),(0.49812000000000006,0.37359,0.149),(0.47317303441103875,0.4047225,0.149),(0.4446610411032206,0.435855,0.149),(0.4118442634585919,0.4669875,0.149),(0.37359000000000003,0.49812,0.149),(0.3280012404606879,0.5292525,0.149),(0.2714068427195601,0.560385,0.149),(0.19442240018513812,0.5915175,0.149),(0.0,0.62265,0.149),(-0.0,0.62265,0.149),(-0.19442240018513812,0.5915175,0.149),(-0.2714068427195601,0.560385,0.149),(-0.3280012404606879,0.5292525,0.149),(-0.37359000000000003,0.49812,0.149),(-0.4118442634585919,0.4669875,0.149),(-0.4446610411032206,0.435855,0.149),(-0.47317303441103875,0.4047225,0.149),(-0.49812000000000006,0.37359,0.149),(-0.520015272077417,0.3424575,0.149),(-0.5392307176663808,0.311325,0.149),(-0.5560442297549271,0.2801925,0.149),(-0.5706681512928509,0.24906,0.149),(-0.5832672005554145,0.2179275,0.149),(-0.5939702437622613,0.186795,0.149),(-0.6028782701290121,0.1556625,0.149),(-0.6100699153375784,0.12453,0.149),(-0.6156053358230011,0.0933975,0.149),(-0.6195289277144369,0.062265,0.149),(-0.6218712004456791,0.0311325,0.149),(-0.62265,0.0,0.149),(-0.62265,0,0),(-0.62265,0,0),(-0.62265,2.4,0),(0.62265,2.4,0),(0.62265,0,0),(0.62265,0,0),(-0.62265,0,0.149),(-0.62265,0,0.149),(-0.62265,2.6,0.149),(0.62265,2.6,0.149),(0.62265,0,0.149),(0.62265,0,0.149)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))])]),
      Transform(DEF='AbsideSX',translation=(13.545,0,-84.475),rotation=(0,1,0,3.14),
        children=[
        Transform(DEF='AbsideSXint',translation=(9.295,-2.135,-39.52),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,3,12,8,9,22,-1,11,22,1,2,-1],solid=False,
              coord=Coordinate(point=[(0,0,0),(2.1,0,0),(2.1,7.73,0),(0,7.73,0),(0,0,0.149),(2.1,0,0.149),(2.1,7.73,0.149),(0,7.73,0.149),(0.59,2.51,0),(1.49,2.51,0),(1.49,4.06,0),(1.49,7.73,0),(0.59,7.73,0),(0.59,4.06,0),(0.59,2.51,0.7),(1.49,2.51,0.7),(1.49,4.06,0.7),(0.59,4.06,0.7),(1.49,7.73,0.149),(0.59,7.73,0.149),(1.49,7.73,0.7),(0.59,7.73,0.7),(1.49,0,0),(1.49,0,0.149),(1.49,0,0.7)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='AbsideNicchiaS1',translation=(9.295,-2.135,-39.52),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[8,14,17,13,-1,9,15,16,10,-1,8,9,15,14,-1,14,15,16,17,-1],solid=False,
              coord=Coordinate(point=[(0,0,0),(2.1,0,0),(2.1,7.73,0),(0,7.73,0),(0,0,0.149),(2.1,0,0.149),(2.1,7.73,0.149),(0,7.73,0.149),(0.59,2.51,0),(1.49,2.51,0),(1.49,4.06,0),(1.49,7.73,0),(0.59,7.73,0),(0.59,4.06,0),(0.59,2.51,0.7),(1.49,2.51,0.7),(1.49,4.06,0.7),(0.59,4.06,0.7),(1.49,7.73,0.149),(0.59,7.73,0.149),(1.49,7.73,0.7),(0.59,7.73,0.7),(1.49,0,0),(1.49,0,0.149),(1.49,0,0.7)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='AbsideNicchiaS2',translation=(10.334,1.49,-38.821),rotation=(0,1,0,3.14),scale=(0.725,1,1),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,84,85,86,87,88,89,-1,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,90,91,92,93,94,95,-1,0,42,43,1,-1,1,43,44,2,-1,2,44,45,3,-1,3,45,46,4,-1,4,46,47,5,-1,5,47,48,6,-1,6,48,49,7,-1,7,49,50,8,-1,8,50,51,9,-1,9,51,52,10,-1,10,52,53,11,-1,11,53,54,12,-1,12,54,55,13,-1,13,55,56,14,-1,14,56,57,15,-1,15,57,58,16,-1,16,58,59,17,-1,17,59,60,18,-1,18,60,61,19,-1,19,61,62,20,-1,20,62,63,21,-1,21,63,64,22,-1,22,64,65,23,-1,23,65,66,24,-1,24,66,67,25,-1,25,67,68,26,-1,26,68,69,27,-1,27,69,70,28,-1,28,70,71,29,-1,29,71,72,30,-1,30,72,73,31,-1,31,73,74,32,-1,32,74,75,33,-1,33,75,76,34,-1,34,76,77,35,-1,35,77,78,36,-1,36,78,79,37,-1,37,79,80,38,-1,38,80,81,39,-1,39,81,82,40,-1,40,82,83,41,-1,84,41,83,90,-1,89,0,42,95,-1],solid=False,
              coord=Coordinate(point=[(0.62265,0.0,0),(0.6218712004456791,0.0311325,0),(0.6195289277144369,0.062265,0),(0.6156053358230011,0.0933975,0),(0.6100699153375784,0.12453,0),(0.6028782701290121,0.1556625,0),(0.5939702437622613,0.186795,0),(0.5832672005554145,0.2179275,0),(0.5706681512928509,0.24906,0),(0.5560442297549271,0.2801925,0),(0.5392307176663808,0.311325,0),(0.520015272077417,0.3424575,0),(0.49812000000000006,0.37359,0),(0.47317303441103875,0.4047225,0),(0.4446610411032206,0.435855,0),(0.4118442634585919,0.4669875,0),(0.37359000000000003,0.49812,0),(0.3280012404606879,0.5292525,0),(0.2714068427195601,0.560385,0),(0.19442240018513812,0.5915175,0),(0.0,0.62265,0),(-0.0,0.62265,0),(-0.19442240018513812,0.5915175,0),(-0.2714068427195601,0.560385,0),(-0.3280012404606879,0.5292525,0),(-0.37359000000000003,0.49812,0),(-0.4118442634585919,0.4669875,0),(-0.4446610411032206,0.435855,0),(-0.47317303441103875,0.4047225,0),(-0.49812000000000006,0.37359,0),(-0.520015272077417,0.3424575,0),(-0.5392307176663808,0.311325,0),(-0.5560442297549271,0.2801925,0),(-0.5706681512928509,0.24906,0),(-0.5832672005554145,0.2179275,0),(-0.5939702437622613,0.186795,0),(-0.6028782701290121,0.1556625,0),(-0.6100699153375784,0.12453,0),(-0.6156053358230011,0.0933975,0),(-0.6195289277144369,0.062265,0),(-0.6218712004456791,0.0311325,0),(-0.62265,0.0,0),(0.62265,0.0,0.7),(0.6218712004456791,0.0311325,0.7),(0.6195289277144369,0.062265,0.7),(0.6156053358230011,0.0933975,0.7),(0.6100699153375784,0.12453,0.7),(0.6028782701290121,0.1556625,0.7),(0.5939702437622613,0.186795,0.7),(0.5832672005554145,0.2179275,0.7),(0.5706681512928509,0.24906,0.7),(0.5560442297549271,0.2801925,0.7),(0.5392307176663808,0.311325,0.7),(0.520015272077417,0.3424575,0.7),(0.49812000000000006,0.37359,0.7),(0.47317303441103875,0.4047225,0.7),(0.4446610411032206,0.435855,0.7),(0.4118442634585919,0.4669875,0.7),(0.37359000000000003,0.49812,0.7),(0.3280012404606879,0.5292525,0.7),(0.2714068427195601,0.560385,0.7),(0.19442240018513812,0.5915175,0.7),(0.0,0.62265,0.7),(-0.0,0.62265,0.7),(-0.19442240018513812,0.5915175,0.7),(-0.2714068427195601,0.560385,0.7),(-0.3280012404606879,0.5292525,0.7),(-0.37359000000000003,0.49812,0.7),(-0.4118442634585919,0.4669875,0.7),(-0.4446610411032206,0.435855,0.7),(-0.47317303441103875,0.4047225,0.7),(-0.49812000000000006,0.37359,0.7),(-0.520015272077417,0.3424575,0.7),(-0.5392307176663808,0.311325,0.7),(-0.5560442297549271,0.2801925,0.7),(-0.5706681512928509,0.24906,0.7),(-0.5832672005554145,0.2179275,0.7),(-0.5939702437622613,0.186795,0.7),(-0.6028782701290121,0.1556625,0.7),(-0.6100699153375784,0.12453,0.7),(-0.6156053358230011,0.0933975,0.7),(-0.6195289277144369,0.062265,0.7),(-0.6218712004456791,0.0311325,0.7),(-0.62265,0.0,0.7),(-0.62265,0,0),(-0.62265,0,0),(-0.62265,-0.5,0),(0.62265,-0.5,0),(0.62265,0,0),(0.62265,0,0),(-0.62265,0,0.7),(-0.62265,0,0.7),(-0.62265,4.2,0.7),(0.62265,4.2,0.7),(0.62265,0,0.7),(0.62265,0,0.7)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='AbsideNicchiaS22',translation=(10.334,1.49,-39.372),rotation=(0,1,0,3.14),scale=(0.725,1,1),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,84,85,86,87,88,89,-1,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,90,91,92,93,94,95,-1,0,42,43,1,-1,1,43,44,2,-1,2,44,45,3,-1,3,45,46,4,-1,4,46,47,5,-1,5,47,48,6,-1,6,48,49,7,-1,7,49,50,8,-1,8,50,51,9,-1,9,51,52,10,-1,10,52,53,11,-1,11,53,54,12,-1,12,54,55,13,-1,13,55,56,14,-1,14,56,57,15,-1,15,57,58,16,-1,16,58,59,17,-1,17,59,60,18,-1,18,60,61,19,-1,19,61,62,20,-1,20,62,63,21,-1,21,63,64,22,-1,22,64,65,23,-1,23,65,66,24,-1,24,66,67,25,-1,25,67,68,26,-1,26,68,69,27,-1,27,69,70,28,-1,28,70,71,29,-1,29,71,72,30,-1,30,72,73,31,-1,31,73,74,32,-1,32,74,75,33,-1,33,75,76,34,-1,34,76,77,35,-1,35,77,78,36,-1,36,78,79,37,-1,37,79,80,38,-1,38,80,81,39,-1,39,81,82,40,-1,40,82,83,41,-1,84,41,83,90,-1,89,0,42,95,-1],solid=False,
              coord=Coordinate(point=[(0.62265,0.0,0),(0.6218712004456791,0.0311325,0),(0.6195289277144369,0.062265,0),(0.6156053358230011,0.0933975,0),(0.6100699153375784,0.12453,0),(0.6028782701290121,0.1556625,0),(0.5939702437622613,0.186795,0),(0.5832672005554145,0.2179275,0),(0.5706681512928509,0.24906,0),(0.5560442297549271,0.2801925,0),(0.5392307176663808,0.311325,0),(0.520015272077417,0.3424575,0),(0.49812000000000006,0.37359,0),(0.47317303441103875,0.4047225,0),(0.4446610411032206,0.435855,0),(0.4118442634585919,0.4669875,0),(0.37359000000000003,0.49812,0),(0.3280012404606879,0.5292525,0),(0.2714068427195601,0.560385,0),(0.19442240018513812,0.5915175,0),(0.0,0.62265,0),(-0.0,0.62265,0),(-0.19442240018513812,0.5915175,0),(-0.2714068427195601,0.560385,0),(-0.3280012404606879,0.5292525,0),(-0.37359000000000003,0.49812,0),(-0.4118442634585919,0.4669875,0),(-0.4446610411032206,0.435855,0),(-0.47317303441103875,0.4047225,0),(-0.49812000000000006,0.37359,0),(-0.520015272077417,0.3424575,0),(-0.5392307176663808,0.311325,0),(-0.5560442297549271,0.2801925,0),(-0.5706681512928509,0.24906,0),(-0.5832672005554145,0.2179275,0),(-0.5939702437622613,0.186795,0),(-0.6028782701290121,0.1556625,0),(-0.6100699153375784,0.12453,0),(-0.6156053358230011,0.0933975,0),(-0.6195289277144369,0.062265,0),(-0.6218712004456791,0.0311325,0),(-0.62265,0.0,0),(0.62265,0.0,0.149),(0.6218712004456791,0.0311325,0.149),(0.6195289277144369,0.062265,0.149),(0.6156053358230011,0.0933975,0.149),(0.6100699153375784,0.12453,0.149),(0.6028782701290121,0.1556625,0.149),(0.5939702437622613,0.186795,0.149),(0.5832672005554145,0.2179275,0.149),(0.5706681512928509,0.24906,0.149),(0.5560442297549271,0.2801925,0.149),(0.5392307176663808,0.311325,0.149),(0.520015272077417,0.3424575,0.149),(0.49812000000000006,0.37359,0.149),(0.47317303441103875,0.4047225,0.149),(0.4446610411032206,0.435855,0.149),(0.4118442634585919,0.4669875,0.149),(0.37359000000000003,0.49812,0.149),(0.3280012404606879,0.5292525,0.149),(0.2714068427195601,0.560385,0.149),(0.19442240018513812,0.5915175,0.149),(0.0,0.62265,0.149),(-0.0,0.62265,0.149),(-0.19442240018513812,0.5915175,0.149),(-0.2714068427195601,0.560385,0.149),(-0.3280012404606879,0.5292525,0.149),(-0.37359000000000003,0.49812,0.149),(-0.4118442634585919,0.4669875,0.149),(-0.4446610411032206,0.435855,0.149),(-0.47317303441103875,0.4047225,0.149),(-0.49812000000000006,0.37359,0.149),(-0.520015272077417,0.3424575,0.149),(-0.5392307176663808,0.311325,0.149),(-0.5560442297549271,0.2801925,0.149),(-0.5706681512928509,0.24906,0.149),(-0.5832672005554145,0.2179275,0.149),(-0.5939702437622613,0.186795,0.149),(-0.6028782701290121,0.1556625,0.149),(-0.6100699153375784,0.12453,0.149),(-0.6156053358230011,0.0933975,0.149),(-0.6195289277144369,0.062265,0.149),(-0.6218712004456791,0.0311325,0.149),(-0.62265,0.0,0.149),(-0.62265,0,0),(-0.62265,0,0),(-0.62265,3,0),(0.62265,3,0),(0.62265,0,0),(0.62265,0,0),(-0.62265,0,0.149),(-0.62265,0,0.149),(-0.62265,3.65,0.149),(0.62265,3.65,0.149),(0.62265,0,0.149),(0.62265,0,0.149)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='AbsideSXest',translation=(9.295,-2.135,-39.52),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[5,23,18,6,-1,4,26,19,7,-1,26,28,29,23,-1],solid=False,
              coord=Coordinate(point=[(0,0,0),(2.1,0,0),(2.1,7.73,0),(0,7.73,0),(0,0,0.149),(2.1,0,0.149),(2.1,7.73,0.149),(0,7.73,0.149),(0.59,2.51,0),(1.49,2.51,0),(1.49,4.06,0),(1.49,7.73,0),(0.59,7.73,0),(0.59,4.06,0),(0.59,2.51,0.7),(1.49,2.51,0.7),(1.49,4.06,0.7),(0.59,4.06,0.7),(1.49,7.73,0.149),(0.59,7.73,0.149),(1.49,7.73,0.7),(0.59,7.73,0.7),(1.49,0,0),(1.49,0,0.149),(1.49,0,0.7),(0.59,0,0),(0.59,0,0.149),(0.59,0,0.7),(0.59,2.51,0.149),(1.49,2.51,0.149),(1.49,4.06,0.149),(0.59,4.06,0.149)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))])]),
      Transform(DEF='Finestra4DX',translation=(7.3205,-0.01,-27.56),
        children=[
        Transform(DEF='terminixfinLAT4',translation=(9.3699,-0.2165,-6.55),
          children=[
          Transform(DEF='terminexfin4',
            children=[
            Shape(
              geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,3,0,4,7,-1,0,1,2,3,-1,4,5,6,7,-1],solid=False,
                coord=Coordinate(point=[(0,0,0),(0.95,0,0),(0.95,0,-0.149),(0.7,0,-0.149),(0,2.75,0),(0.95,2.75,0),(0.95,2.75,-0.149),(0.7,2.75,-0.149)])),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.75,0.25))))]),
          Transform(DEF='terminexfin42',translation=(0,0,-1.82),
            children=[
            Shape(
              geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,3,0,4,7,-1,0,1,2,3,-1,4,5,6,7,-1],solid=False,
                coord=Coordinate(point=[(0,0,0),(0.95,0,0),(0.95,0,0.149),(0.7,0,0.149),(0,2.75,0),(0.95,2.75,0),(0.95,2.75,0.149),(0.7,2.75,0.149)])),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.75,0.25))))])]),
        Transform(DEF='terminixfinSOT',translation=(9.37,-0.2165,-8.37),rotation=(1,0,0,1.57),
          children=[
          Transform(DEF='terminexfin1',
            children=[
            Shape(
              geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,3,0,4,7,-1,0,1,2,3,-1,4,5,6,7,-1],solid=False,
                coord=Coordinate(point=[(0,0,0),(0.95,0,0),(0.95,0,-0.149),(0.7,0,-0.149),(0,1.82,0),(0.95,1.82,0),(0.95,1.82,-0.149),(0.7,1.82,-0.149)])),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.75,0.25))))]),
          Transform(DEF='terminexfin2',translation=(0,0,-2.75),
            children=[
            Shape(
              geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,3,0,4,7,-1,0,1,2,3,-1,4,5,6,7,-1],solid=False,
                coord=Coordinate(point=[(0,0,0),(0.95,0,0),(0.95,0,0.149),(0.7,0,0.149),(0,1.82,0),(0.95,1.82,0),(0.95,1.82,0.149),(0.7,1.82,0.149)])),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.75,0.25))))])])]),
      Transform(DEF='Finestra4SX',translation=(-14.521,-0.01,-27.56),
        children=[
        Transform(DEF='terminixfinLAT42',translation=(9.3699,-0.2165,-6.55),
          children=[
          Transform(DEF='terminexfin422',
            children=[
            Shape(
              geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,3,0,4,7,-1,0,1,2,3,-1,4,5,6,7,-1],solid=False,
                coord=Coordinate(point=[(0,0,0),(-0.95,0,0),(-0.95,0,-0.149),(-0.7,0,-0.149),(0,2.75,0),(-0.95,2.75,0),(-0.95,2.75,-0.149),(-0.7,2.75,-0.149)])),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.75,0.25))))]),
          Transform(DEF='terminexfin4222',translation=(0,0,-1.82),
            children=[
            Shape(
              geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,3,0,4,7,-1,0,1,2,3,-1,4,5,6,7,-1],solid=False,
                coord=Coordinate(point=[(0,0,0),(-0.95,0,0),(-0.95,0,0.149),(-0.7,0,0.149),(0,2.75,0),(-0.95,2.75,0),(-0.95,2.75,0.149),(-0.7,2.75,0.149)])),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.75,0.25))))])]),
        Transform(DEF='terminixfinSOT2',translation=(9.37,-0.2165,-8.37),rotation=(1,0,0,1.57),
          children=[
          Transform(DEF='terminexfin12',
            children=[
            Shape(
              geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,3,0,4,7,-1,0,1,2,3,-1,4,5,6,7,-1],solid=False,
                coord=Coordinate(point=[(0,0,0),(-0.95,0,0),(-0.95,0,-0.149),(-0.7,0,-0.149),(0,1.82,0),(-0.95,1.82,0),(-0.95,1.82,-0.149),(-0.7,1.82,-0.149)])),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.75,0.25))))]),
          Transform(DEF='terminexfin22',translation=(0,0,-2.75),
            children=[
            Shape(
              geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,3,0,4,7,-1,0,1,2,3,-1,4,5,6,7,-1],solid=False,
                coord=Coordinate(point=[(0,0,0),(-0.95,0,0),(-0.95,0,0.149),(-0.7,0,0.149),(0,1.82,0),(-0.95,1.82,0),(-0.95,1.82,0.149),(-0.7,1.82,0.149)])),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.75,0.25))))])])]),
      Transform(DEF='FinestreDX',
        children=[
        Group(DEF='finestraDX',
          children=[
          Transform(DEF='Finestra1',translation=(0,-0.01,-0.19),
            children=[
            Transform(DEF='terminixfinLAT',translation=(9.3699,-0.2165,-6.55),
              children=[
              Transform(DEF='terminexfin1DX',
                children=[
                Shape(
                  geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,3,0,4,7,-1,0,1,2,3,-1,4,5,6,7,-1],solid=False,
                    coord=Coordinate(point=[(0,0,0),(1.31,0,0),(1.31,0,-0.149),(0.89,0,-0.149),(0,2.75,0),(1.31,2.75,0),(1.31,2.75,-0.149),(0.89,2.75,-0.149)])),
                  appearance=Appearance(
                    material=Material(diffuseColor=(1,0.75,0.25))))]),
              Transform(DEF='terminexfin2DX',translation=(0,0,-1.82),
                children=[
                Shape(
                  geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,3,0,4,7,-1,0,1,2,3,-1,4,5,6,7,-1],solid=False,
                    coord=Coordinate(point=[(0,0,0),(1.31,0,0),(1.31,0,0.149),(0.89,0,0.149),(0,2.75,0),(1.31,2.75,0),(1.31,2.75,0.149),(0.89,2.75,0.149)])),
                  appearance=Appearance(
                    material=Material(diffuseColor=(1,0.75,0.25))))])]),
            Transform(DEF='terminixfinSOT',translation=(9.37,-0.2165,-8.37),rotation=(1,0,0,1.57),
              children=[
              Transform(DEF='terminexfin1DX',
                children=[
                Shape(
                  geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,3,0,4,7,-1,0,1,2,3,-1,4,5,6,7,-1],solid=False,
                    coord=Coordinate(point=[(0,0,0),(1.31,0,0),(1.31,0,-0.149),(0.89,0,-0.149),(0,1.82,0),(1.31,1.82,0),(1.31,1.82,-0.149),(0.89,1.82,-0.149)])),
                  appearance=Appearance(
                    material=Material(diffuseColor=(1,0.75,0.25))))]),
              Transform(DEF='terminexfin2DX',translation=(0,0,-2.75),
                children=[
                Shape(
                  geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,3,0,4,7,-1,0,1,2,3,-1,4,5,6,7,-1],solid=False,
                    coord=Coordinate(point=[(0,0,0),(1.31,0,0),(1.31,0,0.149),(0.89,0,0.149),(0,1.82,0),(1.31,1.82,0),(1.31,1.82,0.149),(0.89,1.82,0.149)])),
                  appearance=Appearance(
                    material=Material(diffuseColor=(1,0.75,0.25))))])])])]),
        Transform(DEF='Finestra2',translation=(0,0,-9.22),rotation=(0,0,0,0),
          children=[
          Group(USE='finestraDX')]),
        Transform(DEF='Finestra3',translation=(0,0,-18.195),rotation=(0,0,0,0),
          children=[
          Group(USE='finestraDX')])]),
      Transform(DEF='FinestreSX',translation=(-7.187,0,0),
        children=[
        Group(DEF='finestraSX',
          children=[
          Transform(DEF='Finestra12SX',translation=(0,-0.01,-0.19),
            children=[
            Transform(DEF='terminixfinLAT2SX',translation=(9.3699,-0.2165,-6.55),
              children=[
              Transform(DEF='terminexfin12SX',
                children=[
                Shape(
                  geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,3,0,4,7,-1,0,1,2,3,-1,4,5,6,7,-1],solid=False,
                    coord=Coordinate(point=[(0,0,0),(-1.31,0,0),(-1.31,0,-0.149),(-0.89,0,-0.149),(0,2.75,0),(-1.31,2.75,0),(-1.31,2.75,-0.149),(-0.89,2.75,-0.149)])),
                  appearance=Appearance(
                    material=Material(diffuseColor=(1,0.75,0.25))))]),
              Transform(DEF='terminexfin22SX',translation=(0,0,-1.82),
                children=[
                Shape(
                  geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,3,0,4,7,-1,0,1,2,3,-1,4,5,6,7,-1],solid=False,
                    coord=Coordinate(point=[(0,0,0),(-1.31,0,0),(-1.31,0,0.149),(-0.89,0,0.149),(0,2.75,0),(-1.31,2.75,0),(-1.31,2.75,0.149),(-0.89,2.75,0.149)])),
                  appearance=Appearance(
                    material=Material(diffuseColor=(1,0.75,0.25))))])]),
            Transform(DEF='terminixfinSOT2SX',translation=(9.37,-0.2165,-8.37),rotation=(1,0,0,1.57),
              children=[
              Transform(DEF='terminexfin12SX',
                children=[
                Shape(
                  geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,3,0,4,7,-1,0,1,2,3,-1,4,5,6,7,-1],solid=False,
                    coord=Coordinate(point=[(0,0,0),(-1.31,0,0),(-1.31,0,-0.149),(-0.89,0,-0.149),(0,1.82,0),(-1.31,1.82,0),(-1.31,1.82,-0.149),(-0.89,1.82,-0.149)])),
                  appearance=Appearance(
                    material=Material(diffuseColor=(1,0.75,0.25))))]),
              Transform(DEF='terminexfin22SX',translation=(0,0,-2.75),
                children=[
                Shape(
                  geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,3,0,4,7,-1,0,1,2,3,-1,4,5,6,7,-1],solid=False,
                    coord=Coordinate(point=[(0,0,0),(-1.31,0,0),(-1.31,0,0.149),(-0.89,0,0.149),(0,1.82,0),(-1.31,1.82,0),(-1.31,1.82,0.149),(-0.89,1.82,0.149)])),
                  appearance=Appearance(
                    material=Material(diffuseColor=(1,0.75,0.25))))])])])]),
        Transform(DEF='Finestra22SX',translation=(0,0,-9.22),rotation=(0,0,0,0),
          children=[
          Group(USE='finestraSX')]),
        Transform(DEF='Finestra32SX',translation=(0,0,-18.195),rotation=(0,0,0,0),
          children=[
          Group(USE='finestraSX')])]),
      Group(DEF='portaDX',
        children=[
        Transform(DEF='terminixpor',translation=(13.24,-2.135,-31.169),rotation=(0,1,0,-1.57),
          children=[
          Transform(DEF='terminexpor1',translation=(0,0,0.01),
            children=[
            Shape(
              geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,3,0,4,7,-1,0,1,2,3,-1,4,5,6,7,-1],solid=False,
                coord=Coordinate(point=[(0,0,0),(0.95,0,0),(0.95,0,-0.149),(0.76,0,-0.149),(0,2.75,0),(0.95,2.75,0),(0.95,2.75,-0.149),(0.76,2.75,-0.149)])),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.75,0.25))))]),
          Transform(DEF='terminexpor2',translation=(0,0,-1.7),
            children=[
            Shape(
              geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,3,0,4,7,-1,0,1,2,3,-1,4,5,6,7,-1],solid=False,
                coord=Coordinate(point=[(0,0,0),(0.95,0,0),(0.95,0,0.149),(0.76,0,0.149),(0,2.75,0),(0.95,2.75,0),(0.95,2.75,0.149),(0.76,2.75,0.149)])),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.75,0.25))))])])]),
      Group(DEF='portaSX',
        children=[
        Transform(DEF='terminixporSX',translation=(-2.226,-2.135,-31.1655),rotation=(0,1,0,-1.57),
          children=[
          Transform(DEF='terminexpor12SX',translation=(0,0,0.01),
            children=[
            Shape(
              geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,3,0,4,7,-1,0,1,2,3,-1,4,5,6,7,-1],solid=False,
                coord=Coordinate(point=[(0,0,0),(0.95,0,0),(0.95,0,-0.149),(0.76,0,-0.149),(0,2.75,0),(0.95,2.75,0),(0.95,2.75,-0.149),(0.76,2.75,-0.149)])),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.75,0.25))))]),
          Transform(DEF='terminexpor22SX',translation=(0,0,-1.7),
            children=[
            Shape(
              geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,3,0,4,7,-1,0,1,2,3,-1,4,5,6,7,-1],solid=False,
                coord=Coordinate(point=[(0,0,0),(0.95,0,0),(0.95,0,0.149),(0.76,0,0.149),(0,2.75,0),(0.95,2.75,0),(0.95,2.75,0.149),(0.76,2.75,0.149)])),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.75,0.25))))])])]),
      Transform(DEF='PortaPresb',translation=(40.461,0,-26.74),rotation=(0,1,0,1.57),
        children=[
        Transform(DEF='terminixpor',translation=(13.24,-2.135,-31.169),rotation=(0,1,0,-1.57),
          children=[
          Transform(DEF='terminexpor1',
            children=[
            Shape(
              geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,3,0,4,7,-1,0,1,2,3,-1,4,5,6,7,-1],solid=False,
                coord=Coordinate(point=[(0,0,0),(0.95,0,0),(0.95,0,-0.149),(0.76,0,-0.149),(0,2.75,0),(0.95,2.75,0),(0.95,2.75,-0.149),(0.76,2.75,-0.149)])),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.75,0.25))))]),
          Transform(DEF='terminexpor2',translation=(0,0,-1.92),
            children=[
            Shape(
              geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,3,0,4,7,-1,0,1,2,3,-1,4,5,6,7,-1],solid=False,
                coord=Coordinate(point=[(0,0,0),(0.95,0,0),(0.95,0,0.149),(0.76,0,0.149),(0,2.75,0),(0.95,2.75,0),(0.95,2.75,0.149),(0.76,2.75,0.149)])),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.75,0.25))))])])]),
      Transform(DEF='PortaRetro',translation=(10.2473,-2.135,-45.612),
        children=[
        Transform(DEF='terminexpor1',
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,3,0,4,7,-1,0,1,2,3,-1,4,5,6,7,-1],solid=False,
              coord=Coordinate(point=[(0,0,0),(-0.95,0,0),(-0.95,0,-0.4),(-0.78,0,-0.4),(0,2.75,0),(-0.95,2.75,0),(-0.95,2.75,-0.4),(-0.78,2.75,-0.4)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='terminexpor2',translation=(0,0,-1.633),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,3,0,4,7,-1,0,1,2,3,-1,4,5,6,7,-1],solid=False,
              coord=Coordinate(point=[(0,0,0),(-0.95,0,0),(-0.95,0,0.4),(-0.78,0,0.4),(0,2.75,0),(-0.95,2.75,0),(-0.95,2.75,0.4),(-0.78,2.75,0.4)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))])]),
      Transform(DEF='FinestraA1',translation=(-7.116,1.95,-34.15),
        children=[
        Transform(DEF='terminixfinLATa',translation=(9.3699,-0.2165,-6.55),
          children=[
          Transform(DEF='terminexfinA1',
            children=[
            Shape(
              geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,3,0,4,7,-1,0,1,2,3,-1,4,5,6,7,-1],solid=False,
                coord=Coordinate(point=[(0,0,0),(-0.95,0,0),(-0.95,0,-0.149),(-0.76,0,-0.149),(0,2.49,0),(-0.95,2.49,0),(-0.95,2.49,-0.149),(-0.76,2.49,-0.149)])),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.75,0.25))))]),
          Transform(DEF='terminexfinA2',translation=(0,0,-1.527),
            children=[
            Shape(
              geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,3,0,4,7,-1,0,1,2,3,-1,4,5,6,7,-1],solid=False,
                coord=Coordinate(point=[(0,0,0),(-0.95,0,0),(-0.95,0,0.149),(-0.76,0,0.149),(0,2.49,0),(-0.95,2.49,0),(-0.95,2.49,0.149),(-0.76,2.49,0.149)])),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.75,0.25))))])]),
        Transform(DEF='terminixfinSOTa',translation=(9.37,-0.2165,-8.08),rotation=(1,0,0,1.57),
          children=[
          Transform(DEF='terminexfinA12',
            children=[
            Shape(
              geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,3,0,4,7,-1,0,1,2,3,-1,4,5,6,7,-1],solid=False,
                coord=Coordinate(point=[(0,0,0),(-0.95,0,0),(-0.95,0,-0.149),(-0.76,0,-0.149),(0,1.527,0),(-0.95,1.527,0),(-0.95,1.527,-0.149),(-0.76,1.527,-0.149)])),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.75,0.25))))]),
          Transform(DEF='terminexfinA22',translation=(0,0,-2.49),
            children=[
            Shape(
              geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,3,0,4,7,-1,0,1,2,3,-1,4,5,6,7,-1],solid=False,
                coord=Coordinate(point=[(0,0,0),(-0.95,0,0),(-0.95,0,0.149),(-0.76,0,0.149),(0,1.527,0),(-0.95,1.527,0),(-0.95,1.527,0.149),(-0.76,1.527,0.149)])),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.75,0.25))))])])]),
      #  Ground Floor - right - small rooms  
      Transform(DEF='GF RIGHT SMALL ROOM',
        # TODO add children nodes here
        ),
      Transform(translation=(7.55,0,-1.32),rotation=(0,0,0,0),
        children=[
        Shape(
          geometry=Box(size=(0.14,4.27,1.35)),
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.75,0.25))))]),
      Transform(translation=(9.3,0,-2.1),rotation=(0,0,0,0),
        children=[
        Shape(
          geometry=Box(size=(0.19,4.27,0.22)),
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.75,0.25))))]),
      Transform(translation=(7.64,0,-2.1),rotation=(0,0,0,0),
        children=[
        Shape(
          geometry=Box(size=(0.32,4.27,0.22)),
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.75,0.25))))]),
      Transform(translation=(7.28,0,-2.35),rotation=(0,0,0,0),
        children=[
        Shape(
          geometry=Box(size=(0.22,4.27,0.33)),
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.75,0.25))))]),
      Transform(translation=(7.28,0,-3.89),rotation=(0,0,0,0),
        children=[
        Shape(
          geometry=Box(size=(0.22,4.27,0.33)),
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.75,0.25))))]),
      Transform(translation=(8.32,0,-4.1),rotation=(0,0,0,0),
        children=[
        Shape(
          geometry=Box(size=(2.3,4.27,0.14)),
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.75,0.25))))]),
      #  SOPPALCO  
      Transform(DEF='SOPPALCO',
        # TODO add children nodes here
        ),
      Transform(DEF='Piano',translation=(5.8465,2.03,-3.2),
        children=[
        Shape(
          geometry=Box(size=(7.4,0.38,6.7)),
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.75,0.25))))]),
      Transform(DEF='Piano2',translation=(5.8465,1.815,-3.28),
        children=[
        Shape(
          geometry=Box(size=(7.3,0.0447,6.88)),
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.75,0.25))))]),
      #  Enter any text between the end tags
     <Transform DEF="Organo" translation='5.8465 2.03 -3.6' rotation="0 1 0 0">
        <Shape>
          <Box size='3 3.6 2.34'/>
          <Appearance>
            <Material diffuseColor='1 0.75 0.25'/>
          </Appearance>
        </Shape>
      </Transform>
     
      #  SACRESTIA  
      Transform(DEF='SACRESTIA',
        # TODO add children nodes here
        )])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for *enter FileNameWithNoAbbreviations.py")
