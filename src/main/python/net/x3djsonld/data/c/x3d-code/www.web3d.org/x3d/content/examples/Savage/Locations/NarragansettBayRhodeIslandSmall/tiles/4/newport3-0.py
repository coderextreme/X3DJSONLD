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
    GeoLOD(center=(41.49458451554258,-71.42679273792248,0.0),range=2150.0764,child1Url=['../../tiles/5/newport6-0.x3d'],child2Url=['../../tiles/5/newport6-1.x3d'],child3Url=['../../tiles/5/newport7-0.x3d'],child4Url=['../../tiles/5/newport7-1.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport3-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.486513657765066,-71.4348635957,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=7.337143E-4,zDimension=24,zSpacing=7.018137E-4,height=[19,16,13,10,8,8,6,4,5,9,11,14,16,17,15,13,10,7,4,2,0,0,0,18,15,12,10,9,8,6,5,7,11,13,15,17,17,17,15,12,8,6,2,0,0,0,18,14,11,10,8,7,8,6,8,11,13,16,17,17,18,16,12,10,7,2,0,0,0,19,15,13,10,9,7,8,6,8,10,12,14,16,19,20,17,14,11,7,2,0,0,0,18,14,11,10,7,6,7,8,9,11,14,16,18,20,20,18,16,12,7,3,0,0,0,18,15,12,10,6,5,7,8,10,13,15,17,19,20,20,20,18,14,8,4,0,0,0,20,18,15,12,6,5,7,10,13,15,18,21,22,21,21,21,18,14,9,5,0,0,0,23,20,17,13,8,7,8,12,16,19,22,25,26,26,25,24,20,15,11,7,0,0,0,24,21,18,14,12,11,11,14,17,21,24,27,28,28,27,25,21,16,12,7,0,0,0,25,22,19,17,16,16,16,17,18,22,25,28,32,33,31,27,23,17,13,6,0,0,0,25,22,20,19,19,18,18,20,22,25,29,33,34,34,32,28,23,17,12,0,0,0,0,26,23,22,22,23,22,21,22,24,27,30,34,34,33,33,29,24,17,10,0,0,0,0,28,26,25,26,27,26,25,23,24,27,30,32,34,35,33,29,24,17,2,0,0,0,0,31,30,29,29,30,27,26,24,25,26,28,30,33,34,34,29,25,17,2,0,0,0,0,31,31,30,29,29,28,27,26,26,26,27,30,31,33,32,27,22,15,8,0,0,0,0,32,31,29,30,30,30,28,28,27,26,28,30,31,32,29,26,19,13,8,0,0,0,0,33,34,33,33,31,31,30,29,28,26,27,29,29,29,26,23,18,12,7,1,0,0,0,36,37,36,35,33,32,32,30,28,27,26,26,27,26,24,21,17,12,6,1,0,0,0,38,39,38,37,35,33,32,31,30,28,28,28,25,25,24,21,16,11,2,1,0,0,0,37,37,38,37,36,35,33,31,30,30,31,29,28,26,23,20,16,10,2,0,0,0,0,39,39,39,37,36,34,32,31,31,31,32,31,30,27,24,21,16,10,4,0,0,0,0,40,38,38,38,35,33,33,32,32,32,33,33,33,31,29,17,14,10,8,1,1,1,0,41,40,40,39,37,36,34,33,33,32,31,33,32,33,31,24,19,17,14,0,0,0,0,40,41,41,39,38,36,34,33,33,32,32,33,32,34,33,27,21,18,14,0,0,0,0],
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
