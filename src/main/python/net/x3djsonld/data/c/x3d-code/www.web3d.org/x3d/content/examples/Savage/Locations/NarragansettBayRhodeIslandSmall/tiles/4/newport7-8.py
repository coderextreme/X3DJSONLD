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
    GeoLOD(center=(41.55915137776267,-71.2976590134823,0.0),range=2150.0764,child1Url=['../../tiles/5/newport14-16.x3d'],child2Url=['../../tiles/5/newport14-17.x3d'],child3Url=['../../tiles/5/newport15-16.x3d'],child4Url=['../../tiles/5/newport15-17.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport7-8.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.551080519985156,-71.30572987125981,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=7.337143E-4,zDimension=24,zSpacing=7.018137E-4,height=[26,30,29,26,27,28,28,30,32,31,35,43,45,46,46,48,46,47,47,47,48,49,51,22,24,24,23,25,26,28,27,29,32,35,40,43,45,47,47,47,45,45,44,45,47,52,19,19,20,19,21,24,25,23,23,28,34,39,41,44,48,47,47,44,43,43,40,42,48,12,16,15,17,18,19,18,21,24,30,32,36,43,47,44,39,41,41,41,40,42,41,44,11,13,15,15,13,10,15,21,23,29,35,38,43,39,38,39,41,39,39,39,38,40,39,0,4,8,11,11,12,15,22,26,28,31,34,41,42,35,41,41,38,34,37,38,36,36,0,1,7,10,13,14,18,21,25,30,35,34,38,41,43,43,40,33,32,31,32,32,34,0,0,5,9,12,16,21,22,24,32,35,37,38,44,46,39,35,36,34,26,28,29,31,0,0,3,10,14,19,24,23,28,31,34,38,43,44,46,38,30,27,25,26,28,30,35,0,0,0,8,15,21,23,26,30,33,37,38,40,42,41,36,30,26,23,24,24,30,35,0,0,2,7,15,22,25,26,30,35,38,39,40,38,35,31,25,23,22,21,24,34,41,0,0,0,0,10,18,23,29,32,35,37,40,40,34,34,31,25,22,18,20,23,29,34,0,0,0,1,6,13,21,24,29,33,36,37,39,35,30,27,23,18,17,21,22,29,34,0,0,0,0,2,8,19,24,25,28,34,35,36,35,26,26,22,18,17,17,21,25,31,0,0,0,0,0,0,9,20,27,27,29,31,32,29,27,23,23,21,17,17,20,23,29,0,0,0,0,0,0,5,13,19,22,27,25,27,28,28,22,19,17,16,17,21,28,34,0,0,0,0,0,0,6,11,15,20,22,24,26,26,25,25,23,16,16,18,21,28,33,0,0,0,0,0,0,0,4,12,17,20,22,25,25,22,21,18,14,17,19,22,27,33,0,0,0,0,0,0,0,0,7,13,18,23,23,24,24,21,13,15,16,18,20,25,31,0,0,0,0,0,0,0,0,0,8,15,20,23,24,23,20,14,16,17,17,21,24,28,0,0,0,0,0,0,0,0,0,0,11,14,16,20,19,14,12,17,17,18,20,23,27,0,0,0,0,0,0,0,0,0,0,1,9,12,14,12,8,10,12,16,18,22,23,28,0,0,0,0,0,0,0,0,0,0,0,0,6,4,4,8,11,12,14,15,17,20,23,0,0,0,0,0,0,0,0,0,0,0,0,2,3,4,9,11,11,14,14,17,20,23],
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
