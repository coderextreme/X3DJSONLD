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
    GeoLOD(center=(41.53493880443013,-71.33801330236986,0.0),range=8600.306,child1Url=['../../tiles/3/newport2-2.x3d'],child2Url=['../../tiles/3/newport2-3.x3d'],child3Url=['../../tiles/3/newport3-2.x3d'],child4Url=['../../tiles/3/newport3-3.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/newport1-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.50265537332009,-71.3702967334799,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=0.0029348573,zDimension=23,zSpacing=0.0029348573,height=[19,15,7,4,0,0,0,0,0,0,0,0,0,0,0,0,3,8,3,6,17,27,27,12,15,20,15,0,0,0,0,0,0,0,0,0,0,2,0,6,10,4,8,24,28,28,2,3,10,17,0,0,0,0,0,0,0,0,0,0,16,0,6,3,10,18,33,28,28,2,1,0,0,0,0,0,0,0,0,0,0,0,0,5,0,0,5,14,36,40,39,40,8,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,8,22,30,30,35,35,17,5,0,0,0,0,0,0,0,0,0,0,0,0,4,11,17,11,10,14,11,22,23,21,14,4,0,0,0,0,0,0,0,0,0,0,0,1,17,0,0,0,4,10,23,25,26,29,15,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,29,31,20,33,19,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,19,30,30,17,30,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,16,32,26,26,20,28,17,0,0,0,0,0,11,0,0,0,0,0,0,0,0,0,0,21,39,28,27,28,21,0,0,0,0,0,0,7,0,0,0,0,0,0,0,0,0,0,3,21,12,14,27,14,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,18,20,27,13,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,16,16,27,24,19,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,14,21,23,22,23,27,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,30,30,26,30,28,16,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,14,14,26,32,31,17,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,27,31,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,29,19,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,20,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,20,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,24,21,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
