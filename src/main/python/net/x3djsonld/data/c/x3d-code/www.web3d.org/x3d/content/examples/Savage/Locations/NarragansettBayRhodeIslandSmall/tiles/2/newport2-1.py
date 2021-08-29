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
    GeoLOD(center=(41.599505666650224,-71.33801330236986,0.0),range=8600.306,child1Url=['../../tiles/3/newport4-2.x3d'],child2Url=['../../tiles/3/newport4-3.x3d'],child3Url=['../../tiles/3/newport5-2.x3d'],child4Url=['../../tiles/3/newport5-3.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/newport2-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.56722223554018,-71.3702967334799,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=0.0029348573,zDimension=23,zSpacing=0.0029348573,height=[24,21,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,22,16,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,12,12,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,19,21,16,12,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,21,26,26,31,20,16,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,19,23,29,36,24,27,24,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,18,24,27,29,28,31,31,15,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,21,22,28,33,30,34,35,28,14,0,0,4,5,0,0,0,0,0,0,0,0,0,0,18,30,29,32,36,42,39,42,26,0,0,0,7,1,0,0,0,0,0,0,0,0,0,16,27,27,34,44,48,49,57,38,18,15,0,0,0,0,0,0,0,0,0,0,0,0,0,9,23,28,39,41,50,58,49,27,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,16,27,32,38,46,55,46,22,19,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,31,31,31,40,47,34,20,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,33,33,36,37,33,22,19,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,20,32,33,24,21,28,11,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,11,26,21,15,15,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,10,13,8,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,5,2,4,7,1,1,0,0,0,0,0,0,0,0,0,0,0,0,5,4,4,7,5,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,6,4,8,5,0,0,0,0,0,0,0,0],
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
