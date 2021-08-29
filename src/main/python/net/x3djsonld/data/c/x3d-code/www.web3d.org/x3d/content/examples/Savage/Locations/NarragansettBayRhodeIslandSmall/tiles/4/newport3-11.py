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
    GeoLOD(center=(41.49458451554258,-71.24923386681724,0.0),range=2150.0764,child1Url=['../../tiles/5/newport6-22.x3d'],child2Url=['../../tiles/5/newport6-23.x3d'],child3Url=['../../tiles/5/newport7-22.x3d'],child4Url=['../../tiles/5/newport7-23.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport3-11.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.486513657765066,-71.25730472459475,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=24,zSpacing=7.018137E-4,height=[0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,3,2,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,2,4,3,2,1,2,1,1,1,1,1,0,0,0,0,0,0,0,0,0,2,3,3,3,2,0,0,0,2,2,1,1,1,1,0,0,0,0,0,0,0,1,3,4,4,3,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,3,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,1,0,0,0,0,0,0,0,7,2,0,0,0,0,0,0,0,0,0,-1,1,3,3,2,1,0,0,0,0,0,0,0,4,4,0,0,0,0,0,0,0,0,0,0,4,4,4,4,2,0,0,0,0,0,0,0,5,7,2,0,0,0,0,0,0,0,0,5,6,5,5,4,3,0,0,0,0,0,0,0,11,11,5,0,0,0,0,0,0,0,0,7,7,6,7,6,4,3,0,0,0,0,0,0,16,15,19,5,1,0,0,0,0,0,3,8,9,9,9,8,7,8,5,0,0,0,0,0,19,19,22,10,4,1,1,1,1,2,10,12,12,12,12,12,11,11,10,8,0,0,0,0,18,19,19,12,7,6,6,6,8,8,14,16,16,15,15,15,14,15,15,15,6,0,0,0,15,13,14,13,11,10,10,11,13,15,19,19,19,18,17,17,17,18,19,20,15,1,0,0,12,13,13,12,12,10,11,13,14,18,22,23,22,23,20,18,19,21,22,22,21,14,1,1,10,14,13,11,10,10,12,14,16,20,23,25,25,25,22,21,22,24,25,25,26,23,12,7,14,13,12,11,10,11,13,16,19,22,23,24,26,26,23,22,24,26,27,28,29,29,21,19,19,15,12,11,11,12,14,16,19,22,24,25,27,27,25,25,26,27,29,30,30,28,23,22,26,19,15,11,11,12,14,13,17,22,26,26,27,26,28,28,28,28,29,31,31,28,23,22,33,23,17,15,14,17,14,12,15,21,23,23,25,25,27,29,29,30,31,32,31,28,23,22,35,24,17,16,15,18,14,12,15,20,22,22,25,25,27,29,30,30,31,32,32,28,22,21],
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
