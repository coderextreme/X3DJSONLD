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
    GeoLOD(center=(41.47634988941996,-71.68129407658296,0.0),range=6150.5674,child1Url=['../../tiles/5/newport14-4.x3d'],child2Url=['../../tiles/5/newport14-5.x3d'],child3Url=['../../tiles/5/newport15-4.x3d'],child4Url=['../../tiles/5/newport15-5.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport7-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.45215981325196,-71.70327943062637,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[25,24,24,25,22,25,16,20,21,18,21,18,30,36,25,29,39,46,35,47,55,50,25,25,24,23,25,23,16,19,22,21,16,20,27,37,23,22,24,26,28,39,39,40,18,26,26,23,23,23,20,23,24,25,24,16,19,20,20,26,29,29,30,31,37,41,25,26,25,23,26,22,21,22,26,26,23,23,16,18,21,24,33,35,34,29,28,30,26,24,24,26,26,24,21,20,22,25,24,23,21,17,24,22,30,33,30,28,26,26,26,26,27,27,26,27,22,22,25,31,28,28,25,18,22,24,28,39,26,26,25,24,25,25,26,28,29,24,23,24,27,33,32,32,27,21,20,20,32,43,30,21,26,25,26,26,26,29,27,23,26,22,25,33,32,34,28,22,17,16,23,22,17,17,18,18,27,27,27,28,25,30,24,23,26,32,33,33,38,31,20,14,14,22,28,28,23,22,26,28,32,29,32,23,26,23,28,39,37,41,39,39,18,18,19,28,30,26,24,26,29,28,35,46,38,29,23,26,33,36,37,39,39,38,24,20,18,26,24,21,23,24,30,36,48,54,51,37,25,26,26,39,40,44,40,32,26,20,22,25,26,24,23,23,27,32,45,46,42,32,26,26,25,34,41,50,48,38,29,27,18,25,26,26,31,29,26,28,39,54,42,35,34,26,26,33,44,54,52,45,32,25,24,19,25,28,28,29,20,26,43,53,50,36,29,29,26,30,43,52,48,37,32,27,26,22,23,31,27,25,20,27,46,56,53,41,30,26,26,31,40,42,33,30,29,25,24,21,20,24,32,34,20,26,43,48,47,45,40,33,29,31,28,28,31,28,30,23,28,22,23,30,34,34,21,20,32,46,55,58,53,43,37,32,31,25,29,26,28,24,27,32,22,32,37,37,34,31,37,49,63,66,57,55,50,32,29,28,25,28,29,33,24,26,29,32,40,41,39,32,47,62,70,74,65,50,41,33,36,34,27,26,31,32,28,23,32,32,42,44,27,28,44,60,73,77,64,53,51,40,37,46,27,26,34,33,34,26,29,38,40,43,27,28,45,60,73,78,64,54,51,39,37,47,27,26,34,33,33,26,29,38,41,43],
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
