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
    GeoLOD(center=(41.599505666650224,-71.40258016458995,0.0),range=8600.306,child1Url=['../../tiles/3/newport4-0.x3d'],child2Url=['../../tiles/3/newport4-1.x3d'],child3Url=['../../tiles/3/newport5-0.x3d'],child4Url=['../../tiles/3/newport5-1.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/newport2-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.56722223554018,-71.4348635957,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=0.0029348573,zDimension=23,zSpacing=0.0029348573,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,22,27,24,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,20,23,22,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,13,8,8,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,9,5,11,6,8,5,8,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,13,10,14,12,9,8,9,10,11,10,0,0,0,0,0,0,0,0,0,0,0,0,0,6,8,15,15,10,9,13,14,9,7,0,0,0,0,0,0,0,0,0,0,0,0,0,7,9,12,13,8,7,11,2,1,7,0,0,0,0,0,0,0,0,0,0,0,0,0,15,17,22,13,12,10,11,8,8,9,0,0,0,0,0,0,0,0,0,0,0,2,4,16,16,10,16,0,7,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,13,8,11,6,5,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,14,10,11,4,11,16,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,13,11,11,11,12,16,21,11,8,7,0,0,0,0,0,0,0,0,0,0,0,0,0,15,14,12,16,16,18,12,9,7,8,0,0,0,0,0,0,0,0,0,0,0,0,0,16,14,16,12,13,8,4,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,14,15,9,3,3,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,25,20,16,7,8,10,5,1,5,5,2,0,0,0,0,0,0,0,0,0,0,0,0,22,13,9,13,12,8,8,6,7,5,0,0,0,0,0,0,0,0,0,0,0,0,0,28,13,11,13,16,14,16,9,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,13,11,13,16,13,16,10,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
