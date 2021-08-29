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
    GeoLOD(center=(41.607576524427735,-71.32994244459235,0.0),range=2150.0764,child1Url=['../../tiles/5/newport20-12.x3d'],child2Url=['../../tiles/5/newport20-13.x3d'],child3Url=['../../tiles/5/newport21-12.x3d'],child4Url=['../../tiles/5/newport21-13.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport10-6.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.599505666650224,-71.33801330236986,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=24,zSpacing=7.018137E-4,height=[0,0,0,0,5,14,19,24,21,19,21,18,24,27,21,23,28,30,32,30,32,29,29,29,0,0,0,0,3,16,18,19,18,19,23,21,24,25,24,27,28,29,32,32,34,30,31,30,0,0,0,0,0,14,13,19,22,21,22,23,23,23,28,28,28,30,33,35,33,33,31,32,0,0,0,0,0,6,16,13,19,24,24,24,23,27,28,31,29,30,32,33,33,33,32,32,0,0,0,0,0,5,14,13,19,22,24,26,29,29,29,28,28,31,32,32,32,34,34,35,0,0,0,0,0,0,8,12,14,23,27,30,31,31,29,29,28,28,29,33,31,34,35,35,0,0,0,0,0,0,5,14,18,18,24,26,30,32,34,30,30,29,28,29,31,33,34,34,0,0,0,0,0,0,0,11,19,20,24,26,27,29,27,28,29,32,32,34,34,36,34,34,0,0,0,0,0,0,0,9,19,20,21,25,26,26,28,30,32,35,32,31,33,31,35,34,0,0,0,0,0,0,0,10,15,20,21,24,27,27,30,32,32,33,31,30,31,33,39,40,0,0,0,0,0,0,0,14,16,19,20,26,28,26,28,30,27,26,29,31,32,34,40,42,0,0,0,0,0,0,0,3,13,15,18,22,27,29,28,29,30,29,28,29,32,35,34,35,0,0,0,0,0,0,0,0,4,11,18,21,27,29,29,28,29,29,30,31,32,32,34,36,0,0,0,0,0,0,0,0,2,9,14,18,20,28,25,26,26,28,27,28,31,31,32,33,0,0,0,0,0,0,0,0,0,0,11,13,15,22,23,25,26,27,26,28,27,28,28,29,0,0,0,0,0,0,0,0,0,0,0,1,7,15,19,23,23,26,25,26,26,28,26,27,0,0,0,0,0,0,0,0,0,0,0,0,1,7,11,19,20,23,23,26,25,29,26,26,0,0,0,0,0,0,0,0,0,0,0,0,0,4,8,14,16,20,24,23,26,27,30,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,13,17,17,24,26,29,28,29,29,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,9,16,22,24,26,27,30,30,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,11,17,23,26,29,29,30,30,31,0,0,0,0,0,0,0,0,0,0,0,0,0,6,8,13,13,22,27,30,33,32,33,34,0,0,0,0,0,0,0,0,0,0,0,0,0,1,9,10,18,19,28,32,34,31,31,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,11,19,19,28,32,32,31,32,32],
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
