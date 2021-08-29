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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='AftVentralPanel.x3d',name='title'),
    meta(content='Aft Ventral Panel',name='description'),
    meta(content='Kreg L. Kelly',name='creator'),
    meta(content='20 September 2002',name='created'),
    meta(content='27 March 2016',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Robots/JetFireTransformerToy/AftVentralPanel.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(groundAngle=[1.309,1.5702],groundColor=[(0.5,0.3,0.3),(0.5,0.3,0.3),(0.5,0.4,0.4)],skyAngle=[1.309,1.572],skyColor=[(0,0.2,0.7),(0,0.5,1),(1,1,1)]),
    Transform(
      children=[
      Shape(DEF='AftVentralPanel',
        appearance=Appearance(DEF='MyBlueGrey',
          material=Material(diffuseColor=(.7,.8,.8))),
        geometry=IndexedFaceSet(coordIndex=[31,32,26,25,-1,32,28,0,26,-1,28,27,6,5,4,2,1,0,-1,27,29,7,6,-1,29,30,8,7,-1,4,5,33,3,-1,2,4,3,-1,1,2,3,34,-1,15,37,35,36,12,13,14,-1,35,9,10,11,12,36,-1,38,39,10,9,-1,39,40,11,10,-1,40,41,13,12,11,-1,41,42,14,13,-1,42,43,15,14,-1,43,44,38,39,40,41,42,-1,24,45,46,21,22,23,-1,45,47,18,19,20,21,46,-1,53,54,48,49,50,51,52,-1,48,49,19,18,-1,49,50,20,19,-1,50,51,22,21,20,-1,51,52,23,22,-1,52,53,24,23,-1,55,56,57,8,-1,64,58,16,57,-1,58,59,17,16,-1,59,63,62,17,-1,60,61,25,62,-1,8,57,16,17,62,25,26,0,6,7,-1,30,64,58,59,63,31,32,28,27,29,-1],solid=False,
          coord=Coordinate(point=[(1.045,0.275,0),(0.4125,0.275,0),(0.275,0.605,0),(0,0.48,-0.825),(-0.275,0.605,0),(-0.4125,0.275,0),(-1.045,0.275,0),(-2.0075,0.275,-1.375),(-2.145,0.3025,-2.475),(-2.035,0.1925,-2.475),(-2.035,0.1925,-2.75),(-1.815,0.1925,-3.63),(-1.54,0.33,-3.63),(-1.1687,0.33,-3.63),(-0.88,0.33,-2.31),(-0.88,0.33,-1.7875),(-0.5775,0.65,-1.265),(0.5775,0.65,-1.265),(0.88,0.33,-1.7875),(0.88,0.33,-2.31),(1.1687,0.33,-3.63),(1.54,0.33,-3.63),(1.815,0.1925,-3.63),(2.035,0.1925,-2.75),(2.035,0.1925,-2.475),(2.145,0.3025,-2.475),(2.0075,0.275,-1.375),(-1.1,0.1925,0),(1.1,0.1925,0),(-2.0625,0.1925,-1.375),(-2.2,0.1925,-2.475),(2.2,0.1925,-2.475),(2.0625,0.1925,-1.375),(-0.3025,0.275,-0.4125),(0.3025,0.275,-0.4125),(-1.76,0.33,-2.475),(-1.76,0.33,-2.75),(-1.045,0.33,-2.475),(-2.035,0.1375,-2.475),(-2.035,0.1375,-2.75),(-1.815,0.1375,-3.63),(-1.1687,0.1375,-3.63),(-0.88,0.1375,-2.31),(-0.88,0.1375,-1.7875),(-1.045,0.1375,-2.475),(1.76,0.33,-2.475),(1.76,0.33,-2.75),(1.045,0.33,-2.475),(0.88,0.1375,-1.7875),(0.88,0.1375,-2.31),(1.1687,0.1375,-3.63),(1.815,0.1375,-3.63),(2.035,0.1375,-2.75),(2.035,0.1375,-2.475),(1.045,0.1375,-2.475),(-2.145,0,-2.475),(-1.045,0,-2.475),(-1.045,0.605,-2.475),(-0.5775,0.1375,-1.265),(0.5775,0.1375,-1.265),(1.045,0,-2.475),(2.145,0,-2.475),(1.045,0.605,-2.475),(1.045,0.1375,-2.475),(-1.045,0.1375,-2.475)]))),
      Transform(scale=(0.1,0.2,1),translation=(1.32,0.37,-1.65),
        children=[
        Shape(DEF='VentralFin',
          appearance=Appearance(USE='MyBlueGrey'),
          geometry=Sphere(radius=0.8))]),
      Transform(scale=(0.1,0.2,1),translation=(-1.32,0.37,-1.65),
        children=[
        Shape(USE='VentralFin')]),
      Inline(url=["VentralPanelHatch.x3d","https://savage.nps.edu/Savage/Robots/JetFireTransformerToy/VentralPanelHatch.x3d","VentralPanelHatch.wrl","https://savage.nps.edu/Savage/Robots/JetFireTransformerToy/VentralPanelHatch.wrl"])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for AftVentralPanel.py")
