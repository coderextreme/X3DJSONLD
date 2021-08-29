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
    GeoLOD(center=(41.607576524427735,-71.42679273792248,0.0),range=2150.0764,child1Url=['../../tiles/5/newport20-0.x3d'],child2Url=['../../tiles/5/newport20-1.x3d'],child3Url=['../../tiles/5/newport21-0.x3d'],child4Url=['../../tiles/5/newport21-1.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport10-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.599505666650224,-71.4348635957,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=7.337143E-4,zDimension=24,zSpacing=7.018137E-4,height=[8,8,7,8,8,11,10,9,12,16,12,14,11,9,8,8,10,9,10,9,8,8,9,7,6,7,9,10,10,11,12,11,14,13,11,11,11,10,8,7,8,6,6,12,8,7,7,9,8,8,10,9,12,15,12,14,12,12,13,12,12,12,8,8,4,6,6,7,9,9,8,9,12,11,14,15,16,16,13,14,10,10,14,13,12,8,7,9,8,8,8,8,8,10,9,15,12,14,17,18,17,15,14,14,12,13,9,11,11,7,6,8,6,8,10,10,16,20,14,10,16,18,20,20,17,17,14,12,14,14,13,13,12,11,11,8,10,9,15,15,16,15,15,14,16,17,20,22,23,19,14,12,13,11,13,14,14,11,11,9,9,18,15,17,16,17,16,17,18,20,20,21,25,17,13,11,12,11,12,12,12,9,9,12,18,14,16,17,20,17,20,21,20,20,19,20,17,11,12,11,12,11,12,8,9,8,12,15,15,15,19,18,17,17,18,19,19,17,16,18,15,12,12,13,12,1,0,6,10,11,13,17,16,17,19,19,15,16,15,16,15,13,15,17,9,7,1,0,0,7,10,11,8,15,13,14,15,14,16,12,10,10,10,13,16,16,16,12,7,1,1,4,8,8,9,5,14,15,12,13,13,12,10,11,8,11,12,9,10,10,11,9,3,13,12,6,6,6,4,15,15,12,13,14,10,9,9,11,8,8,11,8,5,8,9,9,10,9,8,6,6,4,12,16,14,11,13,10,8,5,8,9,13,12,8,11,9,7,9,8,8,6,7,7,2,12,11,11,12,12,11,10,10,7,7,12,9,10,10,12,10,7,6,9,10,8,6,2,11,12,11,11,11,12,11,9,7,12,10,11,11,9,8,10,6,8,9,10,11,8,8,13,12,12,10,11,14,10,8,8,8,8,10,13,14,14,8,11,12,9,10,8,9,10,13,13,13,12,11,11,13,9,8,12,10,8,4,8,8,10,15,15,13,13,12,9,13,14,13,11,12,10,12,11,12,12,8,4,4,4,4,4,13,14,11,12,12,15,16,13,14,15,13,11,10,9,9,11,14,4,4,4,4,9,9,13,12,14,17,14,14,14,12,13,12,14,13,11,12,11,11,9,8,4,4,4,8,11,10,12,14,14,14,15,14,16,10,12,12,11,10,8,10,11,11,10,9,7,6,7,5,9,12,6,14,15,16,16,14,10,12,12,12,10,9,11,11,11,11,9,10,8,9,7,9,13,4,9,13,17,16,14],
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
