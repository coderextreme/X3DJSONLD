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
    GeoLOD(center=(41.52473004175595,-71.37349911997524,0.0),range=6150.5674,child1Url=['../../tiles/5/newport16-18.x3d'],child2Url=['../../tiles/5/newport16-19.x3d'],child3Url=['../../tiles/5/newport17-18.x3d'],child4Url=['../../tiles/5/newport17-19.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport8-9.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.39548447401864,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[0,0,2,9,3,0,0,0,7,17,25,29,23,21,18,4,0,0,0,0,0,0,1,0,0,2,2,0,0,0,3,12,20,24,20,17,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,6,5,9,18,18,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,13,18,14,13,14,11,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,21,22,21,18,17,17,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,16,22,21,19,22,22,15,8,2,0,0,0,0,0,0,8,0,0,0,0,0,0,0,10,12,9,13,18,18,16,13,9,4,0,0,0,0,4,0,0,0,0,0,0,0,0,4,2,4,7,15,13,18,21,14,0,0,0,0,0,0,0,0,0,0,0,3,11,11,4,3,3,3,8,12,20,16,0,0,0,0,0,0,0,0,0,0,3,8,13,12,8,4,2,1,1,1,1,1,0,0,0,0,0,0,0,0,0,10,11,12,12,19,19,11,5,2,0,0,0,0,0,0,0,0,0,0,0,13,19,23,20,14,18,21,26,24,16,6,1,0,0,0,0,0,0,0,0,0,0,17,24,30,34,26,20,18,21,28,21,9,4,0,0,0,0,0,0,0,0,0,0,19,28,34,41,40,23,18,16,19,19,14,8,4,0,0,0,0,0,0,0,0,6,17,25,34,40,46,32,19,13,12,20,27,18,9,0,0,0,0,0,0,0,0,0,18,24,28,32,39,33,20,12,16,25,31,33,18,0,0,0,0,0,0,0,0,0,13,22,28,31,35,36,25,15,10,17,29,29,23,7,0,0,0,0,0,0,0,0,5,20,24,29,35,40,28,18,17,14,25,32,18,6,0,0,0,0,0,0,0,0,0,16,23,33,37,43,38,24,17,13,25,33,22,0,0,0,0,0,0,0,0,0,0,11,22,26,37,45,43,34,22,16,25,26,13,0,0,0,0,0,0,0,0,0,0,0,10,16,27,38,46,42,32,31,27,19,6,0,0,0,0,0,0,0,0,0,0,0,9,16,26,37,45,44,32,31,26,17,6,0,0,0,0,0,0],
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
