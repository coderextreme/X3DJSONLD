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
    GeoLOD(center=(41.680214244425336,-71.25730472459475,0.0),range=4300.153,child1Url=['../../tiles/4/newport14-10.x3d'],child2Url=['../../tiles/4/newport14-11.x3d'],child3Url=['../../tiles/4/newport15-10.x3d'],child4Url=['../../tiles/4/newport15-11.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport7-5.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.664072528870314,-71.27344644014977,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=0.0016141715,zDimension=24,zSpacing=0.0014036275,height=[0,0,0,0,1,5,13,14,15,17,11,11,3,0,0,0,1,1,1,1,1,0,0,0,0,0,6,9,17,17,19,11,11,6,0,0,1,1,1,1,1,1,0,0,5,1,2,2,9,14,16,16,15,12,9,1,0,1,1,1,1,1,1,0,11,10,4,1,3,5,15,21,18,15,11,5,6,0,1,1,1,1,1,1,8,14,13,8,3,4,8,16,22,24,17,17,10,3,0,0,1,1,1,1,1,14,15,14,8,4,5,9,19,28,29,19,19,12,4,3,0,1,1,1,1,1,15,18,14,6,8,8,11,18,24,30,25,21,14,12,8,4,2,2,1,1,1,18,17,13,11,8,7,11,16,24,24,25,25,19,17,13,10,6,3,1,2,9,21,18,15,17,17,9,13,19,24,26,32,29,21,17,16,17,11,6,4,4,17,20,22,25,23,22,19,19,19,25,33,43,40,32,21,21,20,13,8,6,9,32,21,25,25,27,25,26,25,28,32,36,46,47,36,27,23,23,17,12,10,19,47,18,19,22,26,28,31,29,26,31,37,45,47,37,30,25,24,19,20,14,24,46,11,16,17,24,24,29,28,35,37,40,52,43,37,30,28,25,21,16,18,25,35,3,7,18,24,32,32,36,39,41,47,53,47,42,34,29,26,19,15,17,21,30,2,7,14,27,37,43,45,49,50,53,52,48,44,38,34,28,19,15,16,20,26,1,6,17,29,39,46,50,54,55,56,52,49,45,36,30,24,19,15,14,17,22,2,6,15,27,37,46,50,48,54,54,51,49,45,38,31,24,18,15,14,15,20,2,6,16,25,35,38,38,44,47,51,49,48,45,40,33,25,19,15,14,15,18,5,8,17,24,31,32,37,38,45,46,46,49,45,40,32,24,20,16,13,13,13,10,12,16,24,25,29,33,38,41,43,45,48,45,40,31,24,21,18,14,9,9,13,15,17,21,21,25,30,39,41,45,48,48,48,37,29,25,22,19,14,8,1,14,18,21,19,18,22,28,36,46,48,48,51,50,39,31,25,22,19,13,4,1,20,24,20,26,20,20,25,33,44,51,49,48,44,37,29,25,20,17,10,1,1,21,25,20,24,21,21,26,33,44,50,50,47,43,36,30,25,20,17,10,1,1],
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
