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
    GeoLOD(center=(41.47634988941996,-71.50541124423569,0.0),range=6150.5674,child1Url=['../../tiles/5/newport14-12.x3d'],child2Url=['../../tiles/5/newport14-13.x3d'],child3Url=['../../tiles/5/newport15-12.x3d'],child4Url=['../../tiles/5/newport15-13.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport7-6.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.45215981325196,-71.5273965982791,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[43,44,49,44,38,39,45,45,42,33,28,22,12,8,7,16,18,18,18,22,26,28,50,55,52,48,41,37,38,42,43,36,22,16,13,8,8,15,18,18,18,13,15,21,55,58,52,44,43,44,33,34,38,28,22,16,12,9,13,12,15,13,17,26,29,25,47,48,47,44,42,34,32,32,39,33,29,24,12,7,11,6,10,15,21,28,32,33,50,48,44,40,40,39,37,32,32,30,25,21,12,13,9,8,13,16,24,36,34,33,47,45,43,44,47,45,31,27,26,22,18,14,11,13,13,12,8,21,31,34,32,29,47,43,43,47,45,42,34,29,25,23,18,15,11,12,14,19,10,18,27,29,26,26,44,42,40,40,37,37,32,32,31,24,20,17,12,12,12,12,16,13,19,23,23,23,52,47,41,37,34,30,28,33,29,30,22,19,15,14,11,7,10,10,19,23,23,23,58,55,51,43,38,36,30,28,30,30,25,17,19,17,16,13,10,11,14,22,27,27,65,56,49,45,40,39,40,36,30,31,30,20,20,18,17,14,13,10,13,21,24,23,63,57,53,51,48,40,36,41,33,28,28,23,19,18,18,14,14,14,13,21,23,24,58,58,58,58,53,46,44,38,32,25,28,22,21,14,15,23,20,14,13,17,25,26,59,59,65,66,64,58,48,39,32,26,23,22,19,18,20,23,17,16,20,16,19,20,59,63,70,69,67,60,54,46,35,29,24,23,21,24,22,19,18,18,22,17,18,19,57,62,69,67,66,62,59,54,41,29,25,21,27,27,24,22,18,16,20,17,17,17,57,71,70,71,67,63,56,44,34,30,26,29,34,37,34,28,21,20,17,20,15,16,62,69,67,72,70,62,50,42,37,32,27,31,39,46,46,37,30,20,14,14,15,15,59,68,67,68,68,62,52,44,38,37,33,31,42,54,56,48,41,29,21,17,16,15,58,64,66,69,66,61,54,45,43,44,39,34,42,54,60,61,47,29,22,19,11,13,56,61,61,71,69,65,58,51,48,51,47,40,45,54,58,58,46,26,18,17,14,13,55,60,61,70,69,65,58,51,48,50,47,40,45,54,58,58,45,26,18,17,14,13],
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
