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
    GeoLOD(center=(41.6560016710928,-71.42679273792248,0.0),range=2150.0764,child1Url=['../../tiles/5/newport26-0.x3d'],child2Url=['../../tiles/5/newport26-1.x3d'],child3Url=['../../tiles/5/newport27-0.x3d'],child4Url=['../../tiles/5/newport27-1.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport13-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.64793081331529,-71.4348635957,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=7.337143E-4,zDimension=24,zSpacing=7.018137E-4,height=[31,30,26,24,21,17,13,13,13,11,12,14,14,16,17,17,18,18,18,16,13,11,9,29,28,23,20,17,13,13,12,13,14,15,17,17,15,15,15,15,15,16,19,18,15,10,26,25,23,18,16,13,13,13,12,14,13,15,14,10,13,15,16,16,17,16,15,14,14,21,20,20,17,13,14,15,13,11,12,12,11,12,12,14,17,17,16,16,15,15,14,14,17,17,16,16,16,14,12,12,9,11,13,12,11,12,13,16,16,15,14,14,14,16,16,14,14,17,16,16,14,12,11,11,6,2,1,4,12,15,16,17,16,14,15,17,16,18,12,12,12,13,15,12,12,11,9,4,3,5,10,14,14,16,16,16,16,16,15,16,18,8,9,10,10,11,11,12,9,9,9,11,11,11,11,13,13,15,14,17,18,16,17,17,0,2,5,7,9,9,7,5,5,7,9,8,9,11,14,15,18,17,17,16,19,16,15,0,0,1,3,4,1,0,0,0,2,5,8,12,13,14,17,17,17,16,16,14,15,16,0,0,0,0,0,0,0,0,0,0,0,1,5,10,14,17,16,16,15,16,15,14,13,2,1,2,2,0,0,0,1,0,0,0,0,0,1,4,9,16,17,15,15,16,14,11,7,7,7,5,2,1,2,3,1,0,0,0,0,0,0,1,8,13,15,15,14,14,11,10,10,10,10,8,6,6,4,2,1,0,0,0,0,0,0,1,6,6,10,13,12,11,15,14,13,12,12,10,8,5,4,4,1,0,0,0,0,0,0,0,0,2,6,10,11,15,14,14,12,12,11,8,6,4,4,5,1,0,0,0,0,0,0,0,0,0,0,2,18,15,13,11,11,11,10,10,10,8,8,7,4,1,0,0,0,0,0,0,0,0,0,17,14,14,13,12,13,13,14,12,8,8,8,8,5,4,3,2,2,3,3,0,0,0,17,17,14,14,14,13,13,12,11,10,10,10,8,8,7,6,8,9,6,5,4,3,2,18,15,15,16,15,14,13,13,13,13,12,10,9,12,13,10,12,13,13,10,7,5,4,18,17,16,16,14,14,12,12,15,16,15,14,13,13,14,12,13,13,14,11,9,7,6,19,19,17,16,14,12,12,13,12,15,14,14,15,16,16,17,15,14,15,12,10,9,7,17,16,16,15,14,14,13,12,11,13,13,14,17,18,18,17,16,15,14,13,12,8,8,17,16,15,15,15,15,13,12,11,12,13,14,17,18,18,17,17,15,14,12,10,9,8],
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
