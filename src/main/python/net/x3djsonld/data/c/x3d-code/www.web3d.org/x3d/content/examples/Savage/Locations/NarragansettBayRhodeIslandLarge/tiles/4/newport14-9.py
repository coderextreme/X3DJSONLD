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

newModel=X3D(profile='Immersive',version='3.1',
  head=head(
    children=[
    component(name='Geospatial',level=1)]),
  Scene=Scene(
    children=[
    GeoLOD(center=(41.81501095577192,-71.37349911997524,0.0),range=6150.5674,child1Url=['../../tiles/5/newport28-18.x3d'],child2Url=['../../tiles/5/newport28-19.x3d'],child3Url=['../../tiles/5/newport29-18.x3d'],child4Url=['../../tiles/5/newport29-19.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport14-9.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.79082087960392,-71.39548447401864,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[1,9,9,8,0,0,0,0,0,0,0,0,0,0,0,9,10,11,8,8,9,8,11,11,12,12,0,0,0,0,0,0,0,0,0,0,0,6,12,13,10,8,8,8,11,11,12,1,0,0,0,0,0,0,0,0,0,0,0,5,21,16,10,8,9,8,12,12,11,0,0,0,0,0,0,0,0,0,0,0,0,19,23,21,19,8,9,9,12,8,3,0,0,0,0,0,0,0,0,0,0,0,10,18,29,17,14,14,8,8,13,12,9,0,0,0,0,0,0,0,0,0,1,6,26,22,28,19,14,12,7,9,15,14,7,3,3,2,0,1,0,0,0,0,1,17,29,29,31,22,17,15,10,11,16,15,11,4,4,3,2,1,0,0,0,0,2,14,21,34,30,23,21,22,13,11,18,14,5,4,4,3,2,1,0,0,0,2,2,17,25,34,29,28,27,26,16,14,18,21,4,10,5,3,1,0,0,0,0,11,14,23,36,35,32,30,33,31,24,22,6,8,7,5,4,1,0,0,0,1,12,13,13,30,34,40,31,32,34,29,23,22,4,5,13,5,0,0,0,0,0,0,5,15,19,27,38,36,32,35,35,30,18,15,1,0,2,0,0,0,0,0,0,1,3,12,22,29,36,36,36,37,34,27,17,14,0,0,0,0,0,0,0,0,0,1,2,10,17,26,29,35,38,41,40,40,18,20,0,0,0,0,0,0,12,15,5,2,3,10,15,18,16,25,34,40,36,28,25,24,0,0,0,0,0,13,18,14,13,10,12,8,11,11,13,25,29,35,31,26,27,28,0,0,0,0,2,21,13,20,19,20,16,18,12,9,10,17,23,32,30,28,27,28,0,0,0,0,6,21,21,21,22,20,19,19,15,14,12,17,19,23,23,18,17,17,0,0,0,2,22,22,20,23,31,29,22,18,18,18,17,17,19,20,18,14,17,17,0,0,0,0,0,7,8,14,21,28,29,22,21,18,19,19,19,18,17,15,15,15,7,6,2,3,0,0,4,11,20,22,24,23,22,21,21,21,20,20,19,19,15,14,7,9,4,3,0,0,3,11,20,22,23,23,22,21,21,21,20,20,19,18,15,14],
            geoOrigin=GeoOrigin(USE='ORIGIN')))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful")
