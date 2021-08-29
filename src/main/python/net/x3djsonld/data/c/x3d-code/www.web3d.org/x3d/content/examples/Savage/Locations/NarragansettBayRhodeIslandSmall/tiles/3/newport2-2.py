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
    GeoLOD(center=(41.51879708887511,-71.35415501792488,0.0),range=4300.153,child1Url=['../../tiles/4/newport4-4.x3d'],child2Url=['../../tiles/4/newport4-5.x3d'],child3Url=['../../tiles/4/newport5-4.x3d'],child4Url=['../../tiles/4/newport5-5.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport2-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.50265537332009,-71.3702967334799,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=0.0014036275,zDimension=24,zSpacing=0.0014036275,height=[20,15,9,6,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,19,20,16,13,9,5,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,20,19,18,17,15,12,10,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,13,15,16,16,18,22,16,12,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,8,13,13,19,25,28,17,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,5,9,12,19,18,17,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,1,1,2,3,1,8,10,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,4,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,6,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,13,9,4,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,18,12,7,4,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,19,14,10,6,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,20,17,10,6,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,22,27,25,19,11,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,29,28,29,18,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,31,32,29,24,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,19,26,35,28,23,9,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,19,31,31,18,10,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,16,23,31,30,20,11,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,15,24,31,32,23,13,0,0,0,0,0,0,0,0,0,0,0,0,10,8,0,0,0,0,18,23,27,31,22,12,0,0,0,0,0,0,0,0,0,0,0,4,16,7,0,0,0,0,18,23,26,31,21,11,0,0,0,0,0,0,0,0,0,0,0,6,18,7,0,0,0,0],
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
