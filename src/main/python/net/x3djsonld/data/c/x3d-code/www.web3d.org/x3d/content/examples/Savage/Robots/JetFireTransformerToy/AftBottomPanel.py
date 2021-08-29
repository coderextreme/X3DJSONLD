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

newModel=X3D(profile='Interchange',version='3.0',
  head=head(
    children=[
    meta(content='AftBottomPanel.x3d',name='title'),
    meta(content='Transformer robot component',name='description'),
    meta(content='Kreg L. Kelly',name='creator'),
    meta(content='20 September 2002',name='created'),
    meta(content='27 March 2016',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Robots/JetFireTransformerToy/AftBottomPanel.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(groundAngle=[1.309,1.5702],groundColor=[(0.5,0.3,0.3),(0.5,0.3,0.3),(0.5,0.4,0.4)],skyAngle=[1.309,1.572],skyColor=[(0,0.2,0.7),(0,0.5,1),(1,1,1)]),
    Transform(
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(.7,.8,.8))),
        geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,-1,28,29,30,31,32,33,34,35,36,25,37,38,39,40,27,41,-1,28,29,1,0,-1,29,30,2,1,-1,30,31,3,2,-1,31,32,4,3,-1,32,33,5,4,-1,33,34,6,5,-1,34,35,7,6,-1,35,36,8,7,-1,36,25,24,8,-1,25,37,14,24,-1,37,38,15,14,-1,38,39,16,15,-1,39,40,17,16,-1,40,27,26,17,-1,27,41,23,26,-1,41,28,0,23,-1,42,43,44,45,46,47,48,49,-1,50,51,52,53,54,55,56,57,-1,42,43,9,8,-1,43,44,10,9,-1,44,45,11,10,-1,45,46,12,11,-1,46,47,13,12,-1,47,48,14,13,-1,48,24,49,14,-1,24,42,8,49,-1,50,26,51,23,-1,26,52,17,51,-1,52,53,18,17,-1,53,54,19,18,-1,54,55,20,19,-1,55,56,21,20,-1,56,57,22,21,-1,57,50,23,22,-1],solid=False,
          coord=Coordinate(point=[(1.5675,0.275,0),(1.1,0.275,0),(1.1,0.275,-0.385),(0.935,0.275,-0.99),(-0.935,0.275,-0.99),(-1.1,0.275,-0.385),(-1.1,0.275,0),(-1.5675,0.275,0),(-2.035,0.275,-1.43),(-2.2275,0.275,-2.2),(-2.3375,0.275,-2.86),(-2.035,0.275,-2.86),(-2.035,0.275,-3.41),(-0.935,0.275,-3.41),(-0.935,0.275,-2.2),(-0.935,0.275,-1.98),(0.935,0.275,-1.98),(0.935,0.275,-2.2),(0.935,0.275,-3.41),(2.035,0.275,-3.41),(2.035,0.275,-2.86),(2.3375,0.275,-2.86),(2.2275,0.275,-2.2),(2.035,0.275,-1.43),(-2.035,0.165,-2.2),(-2.035,0,-2.2),(2.035,0.165,-2.2),(2.035,0,-2.2),(1.5675,0,0),(1.1,0,0),(1.1,0,-0.385),(0.935,0,-0.99),(-0.935,0,-0.99),(-1.1,0,-0.385),(-1.1,0,0),(-1.5675,0,0),(-2.035,0,-1.43),(-0.935,0,-2.2),(-0.935,0,-1.98),(0.935,0,-1.98),(0.935,0,-2.2),(2.035,0,-1.43),(-2.035,0.165,-1.43),(-2.2275,0.165,-2.2),(-2.3375,0.165,-2.86),(-2.035,0.165,-2.86),(-2.035,0.165,-3.41),(-0.935,0.165,-3.41),(-0.935,0.165,-2.2),(-2.035,0.275,-2.2),(2.035,0.275,-1.43),(2.035,0.165,-2.2),(0.935,0.165,-2.2),(0.935,0.165,-3.41),(2.035,0.165,-3.41),(2.035,0.165,-2.86),(2.3375,0.165,-2.86),(2.2275,0.165,-2.2)])))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for AftBottomPanel.py")
