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
    GeoLOD(center=(41.47634988941996,-71.37349911997524,0.0),range=6150.5674,child1Url=['../../tiles/5/newport14-18.x3d'],child2Url=['../../tiles/5/newport14-19.x3d'],child3Url=['../../tiles/5/newport15-18.x3d'],child4Url=['../../tiles/5/newport15-19.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport7-9.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.45215981325196,-71.39548447401864,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,9,8,19,14,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,11,10,23,21,14,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,13,11,11,19,19,20,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,14,14,13,24,23,20,12,0,0,0,0,0,0,0,0,0,0,0,0,8,2,10,16,14,13,9,16,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,16,12,13,13,0,0,3,4,0,10,13,0,0,0,0,0,0,0,0,0,0,0,4,8,15,12,0,0,8,10,12,15,17,0,0,0,0,0,0,0,0,0,0,0,0,0,12,16,0,7,16,18,14,16,19,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,10,20,22,21,18,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,14,24,28,24,20,8,0,0,0,4,2,0,0,0,0,0,0,0,0,0,0,3,22,28,29,27,18,0,0,0,0,16,7,0,0,5,4,0,0,0,0,0,0,1,27,31,31,33,17,0,0,0,14,24,28,28,31,22,13,4,7,2,2,0,0,1,16,30,29,28,13,0,0,0,9,20,28,30,25,27,19,12,0,0,0,0,0,5,8,16,21,17,8,0,0,0,17,24,25,25,23,14,11,6,0,0,0,0,0,1,4,7,14,9,0,0,0,6,18,28,27,24,24,12,1,0,0,0,0,0,0,0,0,2,10,2,0,0,0,8,17,25,30,23,20,18,5,0,0,0,0,0,0,0,0,2,9,3,0,0,0,7,17,25,29,23,21,18,4,0,0,0,0,0,0],
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
