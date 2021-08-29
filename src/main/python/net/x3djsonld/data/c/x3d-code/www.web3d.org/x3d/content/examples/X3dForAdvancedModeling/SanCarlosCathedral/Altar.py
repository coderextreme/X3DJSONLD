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

newModel=X3D(profile='Interchange',version='3.3',
  head=head(
    children=[
    meta(content='Altar.x3d',name='title'),
    meta(content='Altar for San Carlos Cathedral',name='description'),
    meta(content='Michele Foti',name='creator'),
    meta(content='8 March 2012',name='created'),
    meta(content='14 November 2019',name='modified'),
    meta(content='TODO.html',name='reference'),
    meta(content='http://www.sancarloscathedral.net',name='reference'),
    meta(content='RoyalPresidioChapelHistoricalReferences.pdf',name='reference'),
    meta(content='CulturalHeritageProjectSanCarlosCathedral.pdf',name='reference'),
    meta(content='originals/',name='reference'),
    meta(content='originals/ModelSanCarlosChurchFeb-3-2012.x3d',name='reference'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/SanCarlosCathedral/Altar.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Altar.x3d'),
    Background(skyColor=[(0.7216,0.8,0.9922)]),
    Transform(DEF='Colonna1',translation=(0.7,0,-0.7),
      children=[
      Shape(
        geometry=Box(size=(0.4,1.2,0.4)),
        appearance=Appearance(DEF='WoodAppearance',
          texture=ImageTexture(DEF='Wood',url=["images/Wood.jpg","https://x3dgraphics.com/examples/X3dForAdvancedModeling/SanCarlosCathedral/images/Wood.jpg"])))]),
    Transform(DEF='Colonna2',translation=(-0.7,0,-0.7),
      children=[
      Shape(
        geometry=Box(size=(0.4,1.2,0.4)),
        appearance=Appearance(USE='WoodAppearance'))]),
    Transform(DEF='Colonna3',translation=(0.7,0,0.7),
      children=[
      Shape(
        geometry=Box(size=(0.4,1.2,0.4)),
        appearance=Appearance(USE='WoodAppearance'))]),
    Transform(DEF='Colonna4',translation=(-0.7,0,0.7),
      children=[
      Shape(
        geometry=Box(size=(0.4,1.2,0.4)),
        appearance=Appearance(USE='WoodAppearance'))]),
    Transform(DEF='bbase',translation=(-1,-0.7,1),
      children=[
      Shape(
        geometry=IndexedFaceSet(convex=False,coordIndex=[3,7,4,0,-1,0,1,5,4,-1,4,5,6,7,-1,3,7,6,2,-1,1,5,6,2,-1],solid=False,
          coord=Coordinate(DEF='CoordinatePoints',point=[(0,0,0),(0.5,0,0),(0.5,0,-0.5),(0,0,-0.5),(0.09,0.2,-0.09),(0.5,0.2,-0.09),(0.5,0.2,-0.5),(0.09,0.2,-0.5)])),
        appearance=Appearance(USE='WoodAppearance'))]),
    Transform(DEF='bbase2',rotation=(0,1,0,1.57),translation=(0.9995,-0.7,1),
      children=[
      Shape(
        geometry=IndexedFaceSet(convex=False,coordIndex=[3,7,4,0,-1,0,1,5,4,-1,4,5,6,7,-1,3,7,6,2,-1,1,5,6,2,-1],solid=False,
          coord=Coordinate(USE='CoordinatePoints')),
        appearance=Appearance(USE='WoodAppearance'))]),
    Transform(DEF='bbase3',rotation=(0,1,0,3.14),translation=(0.9995,-0.7,-1),
      children=[
      Shape(
        geometry=IndexedFaceSet(convex=False,coordIndex=[3,7,4,0,-1,0,1,5,4,-1,4,5,6,7,-1,3,7,6,2,-1,1,5,6,2,-1],solid=False,
          coord=Coordinate(USE='CoordinatePoints')),
        appearance=Appearance(USE='WoodAppearance'))]),
    Transform(DEF='bbase4',rotation=(0,1,0,-1.57),translation=(-1,-0.7,-1),
      children=[
      Shape(
        geometry=IndexedFaceSet(convex=False,coordIndex=[3,7,4,0,-1,0,1,5,4,-1,4,5,6,7,-1,3,7,6,2,-1,1,5,6,2,-1],solid=False,
          coord=Coordinate(USE='CoordinatePoints')),
        appearance=Appearance(USE='WoodAppearance'))]),
    Transform(DEF='arcoAltare',scale=(0.7,0.6,0.7),translation=(0,-0.15,0.66),
      children=[
      Shape(
        geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,84,85,86,87,88,89,-1,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,90,91,92,93,94,95,-1,0,42,43,1,-1,1,43,44,2,-1,2,44,45,3,-1,3,45,46,4,-1,4,46,47,5,-1,5,47,48,6,-1,6,48,49,7,-1,7,49,50,8,-1,8,50,51,9,-1,9,51,52,10,-1,10,52,53,11,-1,11,53,54,12,-1,12,54,55,13,-1,13,55,56,14,-1,14,56,57,15,-1,15,57,58,16,-1,16,58,59,17,-1,17,59,60,18,-1,18,60,61,19,-1,19,61,62,20,-1,20,62,63,21,-1,21,63,64,22,-1,22,64,65,23,-1,23,65,66,24,-1,24,66,67,25,-1,25,67,68,26,-1,26,68,69,27,-1,27,69,70,28,-1,28,70,71,29,-1,29,71,72,30,-1,30,72,73,31,-1,31,73,74,32,-1,32,74,75,33,-1,33,75,76,34,-1,34,76,77,35,-1,35,77,78,36,-1,36,78,79,37,-1,37,79,80,38,-1,38,80,81,39,-1,39,81,82,40,-1,40,82,83,41,-1,84,41,83,90,-1,89,0,42,95,-1],solid=False,
          coord=Coordinate(DEF='CoordinatePointArrayLarge',point=[(0.62265,0.0,0),(0.6218712004456791,0.0311325,0),(0.6195289277144369,0.062265,0),(0.6156053358230011,0.0933975,0),(0.6100699153375784,0.12453,0),(0.6028782701290121,0.1556625,0),(0.5939702437622613,0.186795,0),(0.5832672005554145,0.2179275,0),(0.5706681512928509,0.24906,0),(0.5560442297549271,0.2801925,0),(0.5392307176663808,0.311325,0),(0.520015272077417,0.3424575,0),(0.49812000000000006,0.37359,0),(0.47317303441103875,0.4047225,0),(0.4446610411032206,0.435855,0),(0.4118442634585919,0.4669875,0),(0.37359000000000003,0.49812,0),(0.3280012404606879,0.5292525,0),(0.2714068427195601,0.560385,0),(0.19442240018513812,0.5915175,0),(0.0,0.62265,0),(-0.0,0.62265,0),(-0.19442240018513812,0.5915175,0),(-0.2714068427195601,0.560385,0),(-0.3280012404606879,0.5292525,0),(-0.37359000000000003,0.49812,0),(-0.4118442634585919,0.4669875,0),(-0.4446610411032206,0.435855,0),(-0.47317303441103875,0.4047225,0),(-0.49812000000000006,0.37359,0),(-0.520015272077417,0.3424575,0),(-0.5392307176663808,0.311325,0),(-0.5560442297549271,0.2801925,0),(-0.5706681512928509,0.24906,0),(-0.5832672005554145,0.2179275,0),(-0.5939702437622613,0.186795,0),(-0.6028782701290121,0.1556625,0),(-0.6100699153375784,0.12453,0),(-0.6156053358230011,0.0933975,0),(-0.6195289277144369,0.062265,0),(-0.6218712004456791,0.0311325,0),(-0.62265,0.0,0),(0.62265,0.0,0.30),(0.6218712004456791,0.0311325,0.30),(0.6195289277144369,0.062265,0.30),(0.6156053358230011,0.0933975,0.30),(0.6100699153375784,0.12453,0.30),(0.6028782701290121,0.1556625,0.30),(0.5939702437622613,0.186795,0.30),(0.5832672005554145,0.2179275,0.30),(0.5706681512928509,0.24906,0.30),(0.5560442297549271,0.2801925,0.30),(0.5392307176663808,0.311325,0.30),(0.520015272077417,0.3424575,0.30),(0.49812000000000006,0.37359,0.30),(0.47317303441103875,0.4047225,0.30),(0.4446610411032206,0.435855,0.30),(0.4118442634585919,0.4669875,0.30),(0.37359000000000003,0.49812,0.30),(0.3280012404606879,0.5292525,0.30),(0.2714068427195601,0.560385,0.30),(0.19442240018513812,0.5915175,0.30),(0.0,0.62265,0.30),(-0.0,0.62265,0.30),(-0.19442240018513812,0.5915175,0.30),(-0.2714068427195601,0.560385,0.30),(-0.3280012404606879,0.5292525,0.30),(-0.37359000000000003,0.49812,0.30),(-0.4118442634585919,0.4669875,0.30),(-0.4446610411032206,0.435855,0.30),(-0.47317303441103875,0.4047225,0.30),(-0.49812000000000006,0.37359,0.30),(-0.520015272077417,0.3424575,0.30),(-0.5392307176663808,0.311325,0.30),(-0.5560442297549271,0.2801925,0.30),(-0.5706681512928509,0.24906,0.30),(-0.5832672005554145,0.2179275,0.30),(-0.5939702437622613,0.186795,0.30),(-0.6028782701290121,0.1556625,0.30),(-0.6100699153375784,0.12453,0.30),(-0.6156053358230011,0.0933975,0.30),(-0.6195289277144369,0.062265,0.30),(-0.6218712004456791,0.0311325,0.30),(-0.62265,0.0,0.30),(-0.62265,-0.95,0),(-1,-0.95,0),(-1,1.1001,0),(1,1.1001,0),(1,-0.95,0),(0.62265,-0.95,0),(-0.62265,-0.95,0.30),(-1,-0.95,0.30),(-1,1.2001,0.30),(1,1.2001,0.30),(1,-0.95,0.30),(0.62265,-0.95,0.30)])),
        appearance=Appearance(USE='WoodAppearance'))]),
    Transform(DEF='arcoAltare2',scale=(0.7,0.6,0.7),translation=(0,-0.15,-0.86),
      children=[
      Shape(
        geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,84,85,86,87,88,89,-1,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,90,91,92,93,94,95,-1,0,42,43,1,-1,1,43,44,2,-1,2,44,45,3,-1,3,45,46,4,-1,4,46,47,5,-1,5,47,48,6,-1,6,48,49,7,-1,7,49,50,8,-1,8,50,51,9,-1,9,51,52,10,-1,10,52,53,11,-1,11,53,54,12,-1,12,54,55,13,-1,13,55,56,14,-1,14,56,57,15,-1,15,57,58,16,-1,16,58,59,17,-1,17,59,60,18,-1,18,60,61,19,-1,19,61,62,20,-1,20,62,63,21,-1,21,63,64,22,-1,22,64,65,23,-1,23,65,66,24,-1,24,66,67,25,-1,25,67,68,26,-1,26,68,69,27,-1,27,69,70,28,-1,28,70,71,29,-1,29,71,72,30,-1,30,72,73,31,-1,31,73,74,32,-1,32,74,75,33,-1,33,75,76,34,-1,34,76,77,35,-1,35,77,78,36,-1,36,78,79,37,-1,37,79,80,38,-1,38,80,81,39,-1,39,81,82,40,-1,40,82,83,41,-1,84,41,83,90,-1,89,0,42,95,-1],solid=False,
          coord=Coordinate(USE='CoordinatePointArrayLarge')),
        appearance=Appearance(USE='WoodAppearance'))]),
    Transform(DEF='arcoAltare3',rotation=(0,1,0,1.57),scale=(0.7,0.6,0.7),translation=(0.66,-0.15,0),
      children=[
      Shape(
        geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,84,85,86,87,88,89,-1,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,90,91,92,93,94,95,-1,0,42,43,1,-1,1,43,44,2,-1,2,44,45,3,-1,3,45,46,4,-1,4,46,47,5,-1,5,47,48,6,-1,6,48,49,7,-1,7,49,50,8,-1,8,50,51,9,-1,9,51,52,10,-1,10,52,53,11,-1,11,53,54,12,-1,12,54,55,13,-1,13,55,56,14,-1,14,56,57,15,-1,15,57,58,16,-1,16,58,59,17,-1,17,59,60,18,-1,18,60,61,19,-1,19,61,62,20,-1,20,62,63,21,-1,21,63,64,22,-1,22,64,65,23,-1,23,65,66,24,-1,24,66,67,25,-1,25,67,68,26,-1,26,68,69,27,-1,27,69,70,28,-1,28,70,71,29,-1,29,71,72,30,-1,30,72,73,31,-1,31,73,74,32,-1,32,74,75,33,-1,33,75,76,34,-1,34,76,77,35,-1,35,77,78,36,-1,36,78,79,37,-1,37,79,80,38,-1,38,80,81,39,-1,39,81,82,40,-1,40,82,83,41,-1,84,41,83,90,-1,89,0,42,95,-1],solid=False,
          coord=Coordinate(USE='CoordinatePointArrayLarge')),
        appearance=Appearance(USE='WoodAppearance'))]),
    Transform(DEF='arcoAltare4',rotation=(0,1,0,1.57),scale=(0.7,0.6,0.7),translation=(-0.86,-0.15,0),
      children=[
      Shape(
        geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,84,85,86,87,88,89,-1,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,90,91,92,93,94,95,-1,0,42,43,1,-1,1,43,44,2,-1,2,44,45,3,-1,3,45,46,4,-1,4,46,47,5,-1,5,47,48,6,-1,6,48,49,7,-1,7,49,50,8,-1,8,50,51,9,-1,9,51,52,10,-1,10,52,53,11,-1,11,53,54,12,-1,12,54,55,13,-1,13,55,56,14,-1,14,56,57,15,-1,15,57,58,16,-1,16,58,59,17,-1,17,59,60,18,-1,18,60,61,19,-1,19,61,62,20,-1,20,62,63,21,-1,21,63,64,22,-1,22,64,65,23,-1,23,65,66,24,-1,24,66,67,25,-1,25,67,68,26,-1,26,68,69,27,-1,27,69,70,28,-1,28,70,71,29,-1,29,71,72,30,-1,30,72,73,31,-1,31,73,74,32,-1,32,74,75,33,-1,33,75,76,34,-1,34,76,77,35,-1,35,77,78,36,-1,36,78,79,37,-1,37,79,80,38,-1,38,80,81,39,-1,39,81,82,40,-1,40,82,83,41,-1,84,41,83,90,-1,89,0,42,95,-1],solid=False,
          coord=Coordinate(USE='CoordinatePointArrayLarge')),
        appearance=Appearance(USE='WoodAppearance'))]),
    Transform(DEF='piano1d',translation=(0,0.58,0),
      children=[
      Shape(
        geometry=Box(size=(2.1,0.06,2.1)),
        appearance=Appearance(USE='WoodAppearance'))]),
    Transform(DEF='piano1',translation=(0,0.5,0),
      children=[
      Shape(
        geometry=Box(size=(1.9,0.02,1.9)),
        appearance=Appearance(USE='WoodAppearance'))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Altar.py")
