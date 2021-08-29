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
    GeoLOD(center=(41.59143480887271,-71.18466700459715,0.0),range=2150.0764,child1Url=['../../tiles/5/newport18-30.x3d'],child2Url=['../../tiles/5/newport18-31.x3d'],child3Url=['../../tiles/5/newport19-30.x3d'],child4Url=['../../tiles/5/newport19-31.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport9-15.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.5833639510952,-71.19273786237466,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=7.337143E-4,zDimension=24,zSpacing=7.018137E-4,height=[11,16,15,14,15,18,17,15,11,9,9,11,14,19,22,24,28,30,28,27,26,26,28,13,18,15,14,16,18,17,14,11,9,9,11,15,19,21,24,28,28,27,26,28,30,33,15,20,17,15,16,16,15,13,10,9,10,11,14,19,24,27,29,29,29,28,28,34,30,23,22,18,17,16,15,15,13,11,10,10,13,15,19,25,30,32,31,29,29,30,31,30,23,21,20,18,16,14,14,12,10,10,10,14,23,23,25,30,31,31,31,31,34,34,32,18,22,22,19,16,14,13,12,10,9,10,14,25,29,31,31,32,32,32,34,37,33,31,17,21,21,18,16,14,13,12,11,10,12,17,22,27,33,35,35,34,34,35,34,33,33,19,22,21,17,15,13,12,11,10,10,12,18,22,28,38,39,38,35,35,35,32,36,35,21,23,20,17,13,12,12,11,10,10,13,19,24,30,38,42,40,35,35,35,34,34,33,26,23,19,16,13,12,11,11,10,10,13,20,25,36,42,43,40,35,34,34,34,34,34,21,22,19,16,14,12,11,11,10,10,14,20,29,37,44,46,44,37,35,35,34,34,33,21,21,19,16,15,13,12,11,10,11,15,24,34,43,47,44,39,35,37,34,34,34,33,21,20,19,18,17,15,13,11,10,12,17,26,39,48,47,41,35,35,34,34,34,34,33,19,19,20,20,18,16,13,10,10,11,19,30,42,51,46,39,35,34,34,34,34,34,34,18,20,21,21,19,16,13,10,10,13,22,32,41,47,41,37,37,36,34,34,34,34,33,18,21,22,21,19,16,13,11,11,15,23,32,37,39,38,38,39,39,37,35,34,34,34,18,21,22,21,20,16,12,10,12,16,23,29,31,36,38,39,39,40,40,36,34,34,34,18,23,23,19,17,14,11,10,11,16,22,26,33,38,39,38,40,36,36,35,34,34,34,16,20,20,17,14,11,11,11,12,19,25,29,38,41,40,37,35,34,34,35,34,34,34,14,16,16,14,12,10,10,11,15,25,30,36,44,45,43,39,35,34,34,34,34,34,35,11,12,13,12,10,9,9,12,18,26,33,46,50,47,43,40,37,35,34,34,35,36,35,10,11,12,12,10,10,10,13,18,22,30,43,47,45,42,42,41,38,35,35,35,39,40,8,9,10,11,10,9,9,11,17,23,31,40,42,45,45,45,43,40,38,37,35,35,38,7,9,10,10,9,8,8,11,17,23,31,40,42,45,46,46,43,41,38,37,35,35,38],
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
