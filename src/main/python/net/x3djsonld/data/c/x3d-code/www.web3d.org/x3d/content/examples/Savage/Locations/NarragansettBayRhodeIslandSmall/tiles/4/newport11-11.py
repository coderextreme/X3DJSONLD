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
    GeoLOD(center=(41.62371823998276,-71.24923386681724,0.0),range=2150.0764,child1Url=['../../tiles/5/newport22-22.x3d'],child2Url=['../../tiles/5/newport22-23.x3d'],child3Url=['../../tiles/5/newport23-22.x3d'],child4Url=['../../tiles/5/newport23-23.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport11-11.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.615647382205246,-71.25730472459475,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=24,zSpacing=7.018137E-4,height=[43,41,43,43,43,41,43,51,45,45,46,46,52,52,49,45,40,36,33,30,26,22,18,17,41,40,43,42,43,41,43,51,51,50,49,50,51,52,49,45,41,36,32,29,26,22,17,16,35,39,40,42,40,42,45,53,55,52,53,58,53,50,48,44,40,37,32,28,24,21,15,14,35,41,41,42,42,44,44,50,57,52,56,56,55,53,47,43,38,35,32,29,25,21,15,14,31,33,34,38,41,47,49,52,57,54,57,58,53,51,48,42,37,33,31,27,23,19,14,13,31,34,35,39,42,44,48,48,54,57,55,53,53,50,45,42,38,34,30,26,22,19,14,13,27,32,38,38,42,44,45,47,49,48,49,52,50,46,42,40,37,33,29,25,21,18,14,13,28,33,35,35,40,43,45,43,44,47,43,42,45,40,39,37,36,33,29,24,21,17,13,12,31,38,38,35,36,38,40,39,40,44,37,34,37,34,33,34,34,33,29,25,21,17,13,12,27,29,34,38,38,37,41,38,38,42,38,29,23,25,30,31,32,31,29,25,21,17,13,12,27,30,34,36,34,34,36,35,35,34,36,27,24,22,27,29,30,30,28,26,21,17,15,14,27,29,33,35,34,34,31,31,30,29,31,27,20,20,25,27,29,29,28,26,23,18,16,15,24,31,33,34,29,29,32,29,29,23,26,27,20,22,23,26,28,28,28,26,22,19,16,15,22,23,28,33,32,31,29,29,25,26,23,24,24,21,21,24,27,27,28,25,22,19,15,15,19,25,29,32,30,30,27,26,25,24,23,23,26,21,19,22,25,25,26,25,21,18,15,14,20,25,30,33,34,30,24,22,22,22,18,17,19,22,21,22,24,23,24,23,21,18,15,14,17,24,26,29,31,28,28,29,28,22,19,18,16,18,19,20,21,21,22,21,19,17,14,14,12,18,23,28,31,29,34,30,28,25,21,15,16,18,16,17,19,19,19,19,18,17,13,12,9,14,21,26,29,30,34,32,29,26,23,21,18,17,16,16,16,16,17,17,17,15,11,10,9,12,19,25,28,32,34,33,29,26,25,22,19,17,16,14,13,16,15,15,14,13,10,9,6,11,17,24,28,34,35,33,30,26,25,21,20,19,17,14,12,12,13,13,11,10,8,7,6,7,16,23,27,33,34,32,30,27,25,23,21,20,18,15,12,9,9,12,10,8,6,6,5,7,12,21,27,31,33,33,30,28,25,24,22,20,18,14,11,9,7,6,8,6,5,5,5,7,12,21,26,31,33,33,30,28,25,24,23,21,18,14,11,8,6,5,7,6,5,4],
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
