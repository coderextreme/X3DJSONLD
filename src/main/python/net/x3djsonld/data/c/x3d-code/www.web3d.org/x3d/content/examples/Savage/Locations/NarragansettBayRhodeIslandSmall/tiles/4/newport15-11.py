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
    GeoLOD(center=(41.68828510220285,-71.24923386681724,0.0),range=2150.0764,child1Url=['../../tiles/5/newport30-22.x3d'],child2Url=['../../tiles/5/newport30-23.x3d'],child3Url=['../../tiles/5/newport31-22.x3d'],child4Url=['../../tiles/5/newport31-23.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport15-11.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.680214244425336,-71.25730472459475,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=23,zSpacing=7.337143E-4,height=[41,48,50,45,43,40,37,32,31,29,26,29,28,25,23,21,18,16,17,18,17,21,27,28,44,46,48,47,44,42,39,39,36,32,30,27,24,24,22,20,18,16,15,16,18,20,24,26,50,55,49,46,46,43,42,40,35,34,31,28,26,24,22,19,17,16,15,16,18,19,23,24,49,48,51,48,46,44,44,45,40,34,32,30,27,25,23,19,17,16,15,16,17,19,22,22,47,51,49,48,47,45,44,40,39,38,36,31,29,27,23,19,17,16,15,16,17,18,21,21,50,51,50,50,47,47,46,42,37,35,33,30,28,26,23,19,17,15,15,15,16,17,19,20,55,52,50,50,49,47,45,41,37,34,33,29,25,23,22,19,16,15,15,14,15,16,18,18,54,52,52,51,48,47,45,40,39,35,32,28,26,24,20,19,17,15,14,14,15,15,16,17,54,51,51,49,49,48,45,41,39,35,32,29,26,24,21,18,17,15,14,14,14,14,16,17,53,52,50,47,48,46,43,42,39,35,33,31,28,24,21,18,16,15,14,14,14,14,16,17,51,50,50,48,48,45,45,42,40,35,33,31,28,24,21,19,16,15,14,14,13,14,16,17,49,48,48,48,49,49,45,42,39,37,34,31,26,24,22,19,16,15,14,13,13,13,15,15,46,45,47,48,49,46,45,43,41,38,33,31,27,24,22,20,18,16,14,13,12,12,13,14,46,45,45,47,47,46,44,44,41,38,34,29,26,24,22,21,20,18,16,14,12,11,12,12,44,45,45,47,47,48,45,43,40,38,33,29,26,24,22,21,20,18,17,15,13,11,9,9,45,45,46,50,49,47,45,46,39,35,31,29,27,24,22,21,20,19,17,15,13,11,8,7,47,47,48,48,48,48,49,46,38,34,30,27,27,24,22,21,20,19,18,16,13,10,7,6,47,47,48,49,48,49,47,44,41,36,33,29,27,24,23,22,21,19,17,15,13,9,6,5,45,47,48,50,51,51,50,45,40,37,33,28,25,24,23,22,21,19,17,14,12,8,3,2,48,50,48,49,52,51,48,43,39,35,33,30,27,25,23,21,20,18,16,14,11,6,1,1,50,50,49,49,49,50,45,40,39,34,31,29,26,24,23,20,19,17,16,13,9,4,1,1,48,49,48,45,46,48,42,37,35,31,31,31,27,22,19,20,19,17,15,12,7,2,1,1,48,49,48,45,46,46,41,37,34,31,29,30,26,22,19,20,19,17,15,11,7,2,1,1],
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
