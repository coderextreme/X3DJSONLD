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
    GeoLOD(center=(41.59143480887271,-71.32994244459235,0.0),range=2150.0764,child1Url=['../../tiles/5/newport18-12.x3d'],child2Url=['../../tiles/5/newport18-13.x3d'],child3Url=['../../tiles/5/newport19-12.x3d'],child4Url=['../../tiles/5/newport19-13.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport9-6.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.5833639510952,-71.33801330236986,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=24,zSpacing=7.018137E-4,height=[0,0,0,0,0,0,0,0,0,0,0,0,1,6,11,11,10,11,9,5,5,2,0,0,0,0,0,0,0,0,0,0,0,0,0,2,10,12,10,9,8,9,10,12,9,7,6,6,0,0,0,0,0,0,0,0,0,0,0,4,9,11,12,13,12,13,14,14,11,5,4,4,0,0,0,0,0,0,0,0,0,0,4,8,10,11,13,12,12,15,14,15,14,9,7,5,0,0,0,0,0,0,0,0,0,3,7,7,9,12,14,15,17,17,16,14,9,12,6,5,0,0,0,0,0,0,0,0,1,5,8,10,11,14,15,15,17,20,18,16,15,14,10,10,0,0,0,0,0,0,0,0,5,9,11,13,14,15,16,17,17,18,18,16,15,16,15,13,0,0,0,0,0,0,3,6,8,13,13,15,17,18,19,17,20,19,21,17,18,13,17,19,0,0,0,0,0,1,4,9,15,15,17,19,18,17,20,24,22,24,23,25,21,19,18,17,0,0,0,0,0,6,10,11,14,18,18,20,22,27,27,25,25,26,23,25,26,24,20,18,0,0,0,0,0,7,13,16,21,20,21,26,28,25,27,26,24,25,27,27,27,24,23,22,0,0,0,0,7,11,13,14,21,22,26,26,26,26,27,25,26,26,29,27,30,28,25,24,0,0,0,0,7,8,12,18,22,23,26,24,24,26,27,29,28,28,32,31,32,27,24,24,0,0,0,0,9,10,17,21,22,24,24,22,25,29,27,31,30,32,32,27,27,31,28,27,0,0,0,1,8,12,15,19,20,20,23,25,24,25,25,27,27,30,31,31,31,31,30,30,0,0,0,3,8,12,15,17,20,21,22,21,25,25,23,30,32,31,32,29,33,31,28,28,0,0,0,0,8,13,17,19,20,21,22,21,22,22,22,24,29,32,36,35,36,33,32,31,0,0,0,0,11,14,16,19,21,24,23,24,20,22,25,25,27,31,32,33,32,33,34,34,0,0,0,7,12,15,18,18,22,23,21,21,23,20,23,26,29,30,32,38,36,34,32,33,0,0,0,13,13,14,19,22,21,20,22,22,21,21,25,27,28,30,32,35,31,30,30,30,0,0,0,2,14,17,15,18,19,26,21,24,24,23,22,26,27,30,29,32,29,30,29,29,0,0,0,2,17,19,15,15,21,23,21,23,21,20,26,26,27,31,31,31,31,30,28,28,0,0,0,0,9,15,18,21,20,20,21,19,24,27,22,24,28,30,31,30,30,30,28,28,0,0,0,0,5,14,19,24,21,19,21,18,24,27,21,23,28,30,32,30,32,29,29,29],
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
