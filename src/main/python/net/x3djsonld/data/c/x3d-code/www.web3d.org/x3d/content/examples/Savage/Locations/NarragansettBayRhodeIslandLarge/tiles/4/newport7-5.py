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
    GeoLOD(center=(41.47634988941996,-71.5493819523225,0.0),range=6150.5674,child1Url=['../../tiles/5/newport14-10.x3d'],child2Url=['../../tiles/5/newport14-11.x3d'],child3Url=['../../tiles/5/newport15-10.x3d'],child4Url=['../../tiles/5/newport15-11.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport7-5.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.45215981325196,-71.57136730636591,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[26,26,26,26,26,26,33,44,53,49,38,39,42,40,42,44,46,54,53,49,43,43,26,26,26,26,26,26,30,44,54,52,44,38,43,43,45,48,48,51,55,55,52,50,28,26,26,26,26,26,26,45,52,48,41,40,42,48,46,47,50,55,53,55,53,55,36,34,32,33,30,26,26,38,53,51,42,43,41,40,44,50,51,50,48,47,47,47,32,34,33,33,32,30,31,31,50,50,41,40,43,44,44,46,51,50,45,47,49,50,31,30,30,29,30,30,30,30,42,45,34,33,37,39,40,41,45,44,40,45,47,47,34,31,30,30,28,29,29,29,33,33,33,33,32,32,40,45,49,36,42,45,46,47,33,31,30,29,30,31,30,30,31,31,30,32,30,30,31,33,36,40,41,41,43,44,33,34,30,29,28,28,30,31,29,27,29,33,31,40,51,58,68,65,63,59,50,52,33,31,30,30,30,31,30,30,31,30,31,31,33,42,58,70,78,76,75,66,58,58,31,29,30,29,31,29,29,29,29,29,28,30,30,41,53,65,75,73,71,67,66,65,34,32,31,32,32,31,28,28,32,29,27,29,27,32,45,54,70,69,64,65,64,63,42,38,28,31,34,32,28,28,28,31,31,30,29,27,29,37,50,57,60,60,59,58,45,35,29,31,31,32,32,30,29,31,29,28,31,29,26,28,30,47,54,57,60,59,41,33,29,29,29,29,29,29,29,31,28,27,28,29,28,27,27,31,44,53,57,59,33,31,29,31,30,31,30,29,27,29,30,28,30,29,28,26,29,28,34,48,54,57,32,30,31,31,32,32,31,30,29,27,29,30,29,30,29,28,27,35,42,45,54,57,28,31,31,31,32,32,30,30,32,30,28,29,30,28,30,30,30,29,39,48,60,62,33,32,33,33,32,34,33,34,32,32,30,29,30,28,28,30,32,32,33,46,57,59,31,31,31,32,30,30,31,30,32,33,32,29,28,33,29,31,33,32,30,41,55,58,32,34,35,35,34,33,31,34,33,32,33,34,28,31,31,31,32,33,32,39,53,56,33,34,35,35,34,33,31,34,33,32,33,34,28,31,31,31,32,32,31,39,53,55],
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
