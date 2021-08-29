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
    GeoLOD(center=(41.5107262310976,-71.24923386681724,0.0),range=2150.0764,child1Url=['../../tiles/5/newport8-22.x3d'],child2Url=['../../tiles/5/newport8-23.x3d'],child3Url=['../../tiles/5/newport9-22.x3d'],child4Url=['../../tiles/5/newport9-23.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport4-11.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.50265537332009,-71.25730472459475,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=23,zSpacing=7.337143E-4,height=[35,24,17,16,15,18,14,12,15,20,22,22,25,25,27,29,30,30,31,32,32,28,22,21,34,27,20,17,15,18,15,15,17,17,19,21,25,27,28,28,30,32,33,35,32,28,21,20,33,30,23,20,15,16,16,19,19,19,22,22,24,26,27,28,30,32,33,34,32,26,20,18,38,31,26,22,19,18,16,17,18,20,20,23,24,28,28,28,29,31,33,33,28,23,17,16,46,39,32,23,20,20,18,17,18,21,23,25,25,26,28,28,29,30,30,28,23,19,15,14,48,46,37,32,27,18,19,20,20,21,24,24,28,28,28,28,28,28,26,22,18,14,12,11,49,45,40,34,31,25,22,22,22,23,26,26,26,27,29,28,27,25,21,17,13,9,7,6,53,49,44,37,33,26,25,25,27,27,27,27,26,28,28,27,24,21,17,12,8,5,4,4,52,51,49,40,35,32,30,28,28,28,31,29,28,26,26,25,22,19,15,9,6,5,4,5,52,49,47,44,41,37,34,33,34,33,30,32,29,24,23,23,21,18,13,9,6,5,6,6,52,50,50,46,43,40,39,36,37,36,33,31,32,28,24,23,21,17,12,8,6,6,7,8,51,52,51,49,44,44,43,40,39,38,35,34,32,30,28,24,21,17,12,9,7,8,9,9,53,54,53,50,46,49,47,42,40,39,36,39,34,31,28,25,21,17,12,10,8,10,12,13,54,54,54,53,52,52,48,45,43,42,38,37,36,33,30,26,22,17,12,9,9,11,15,17,56,55,56,57,54,52,53,49,45,43,42,39,37,34,31,26,23,18,13,10,11,14,18,19,60,58,57,54,58,55,56,53,46,46,44,40,38,36,32,27,23,18,14,11,12,16,21,22,59,59,59,59,60,55,54,55,57,51,46,41,39,36,32,28,24,18,15,13,14,18,24,25,62,61,63,62,60,60,61,60,59,53,49,44,40,36,33,29,24,18,15,15,17,21,26,27,60,60,60,63,64,67,63,62,55,53,52,46,43,38,33,29,24,19,15,16,18,22,27,28,64,64,62,63,64,62,61,59,58,55,54,50,45,40,34,30,25,21,16,17,19,22,26,28,64,59,60,64,67,65,65,57,55,56,55,50,45,41,36,31,26,21,17,17,19,22,25,26,62,61,62,63,66,68,61,58,58,56,54,50,45,41,37,33,28,22,18,17,19,22,24,24,62,61,63,63,64,67,60,58,59,57,54,50,46,42,37,33,28,22,19,17,19,22,23,23],
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
