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
    GeoLOD(center=(41.478442799987555,-71.42679273792248,0.0),range=2150.0764,child1Url=['../../tiles/5/newport4-0.x3d'],child2Url=['../../tiles/5/newport4-1.x3d'],child3Url=['../../tiles/5/newport5-0.x3d'],child4Url=['../../tiles/5/newport5-1.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport2-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.47037194221004,-71.4348635957,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=7.337143E-4,zDimension=24,zSpacing=7.018137E-4,height=[36,36,31,24,16,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,37,36,32,26,17,7,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,37,36,33,26,18,9,0,0,0,0,0,0,0,0,0,0,0,0,0,8,7,0,0,37,36,31,23,15,8,2,0,0,0,0,0,0,0,0,0,0,0,4,10,10,8,0,35,36,30,22,14,6,1,0,0,0,0,0,0,0,0,0,0,0,5,10,12,13,6,35,34,28,21,14,5,0,0,0,0,0,0,0,0,0,0,1,4,8,11,14,16,10,34,30,25,18,11,4,0,0,0,0,0,0,0,0,0,0,0,5,9,12,16,17,10,33,28,23,16,8,4,0,0,0,0,0,0,0,0,0,0,0,3,8,12,15,18,13,31,26,20,14,7,3,0,0,0,0,0,0,0,0,0,0,0,2,7,11,15,19,16,27,22,17,10,5,1,0,0,0,0,0,0,0,0,0,0,0,3,7,13,16,18,16,24,19,13,8,3,0,0,0,0,0,0,0,0,0,0,0,0,3,7,11,13,16,16,20,16,11,6,3,0,0,0,0,0,0,0,0,0,0,0,0,2,6,9,11,14,16,17,13,9,5,3,1,0,0,0,0,0,0,0,0,0,0,0,0,5,7,8,12,15,16,12,7,4,1,0,0,0,0,0,0,0,0,0,0,0,0,0,3,4,7,9,12,16,12,7,4,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,4,6,11,17,11,7,4,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,9,17,12,8,5,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,2,4,16,12,8,6,4,2,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,2,0,16,11,8,6,5,5,4,2,1,1,1,1,1,3,3,4,4,3,2,1,0,0,0,18,13,9,6,5,5,5,4,2,2,5,8,8,7,6,6,4,3,2,0,0,0,0,19,14,9,7,6,6,6,6,4,4,7,11,11,11,10,8,7,5,2,0,0,0,0,19,15,10,7,7,7,7,9,6,6,8,11,14,15,13,11,9,6,3,1,0,0,0,19,16,13,9,8,7,7,4,5,8,11,13,16,17,15,12,10,7,4,2,0,0,0,19,16,13,10,8,8,6,4,5,9,11,14,16,17,15,13,10,7,4,2,0,0,0],
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
