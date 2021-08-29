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
    GeoLOD(center=(41.59143480887271,-71.31380072903733,0.0),range=2150.0764,child1Url=['../../tiles/5/newport18-14.x3d'],child2Url=['../../tiles/5/newport18-15.x3d'],child3Url=['../../tiles/5/newport19-14.x3d'],child4Url=['../../tiles/5/newport19-15.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport9-7.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.5833639510952,-71.32187158681484,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=24,zSpacing=7.018137E-4,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,6,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,6,9,5,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,7,5,6,7,6,5,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,10,8,7,8,6,6,6,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,13,10,12,10,9,11,8,6,5,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,19,19,13,11,10,10,8,8,7,5,6,0,0,0,0,0,0,0,0,0,0,0,0,0,17,14,13,14,13,11,11,12,10,4,1,0,0,0,0,0,0,0,0,0,0,0,0,0,18,16,17,13,13,12,12,11,10,11,3,0,0,0,0,0,0,0,0,0,0,0,0,0,22,17,16,18,16,16,14,12,11,10,7,3,0,0,0,0,0,0,0,0,0,0,0,0,24,21,19,18,17,17,16,14,14,12,13,10,4,0,0,0,0,0,0,0,0,0,0,0,24,22,21,21,20,19,18,15,18,16,15,13,10,3,0,0,0,0,0,0,0,0,0,0,27,24,22,23,20,20,22,21,20,19,17,16,12,9,0,0,0,0,0,0,0,0,0,0,30,25,24,22,22,21,25,26,22,21,21,18,17,13,8,0,0,0,0,0,0,0,0,0,28,26,25,24,24,26,25,26,26,28,25,22,19,14,11,3,0,0,0,0,0,0,0,0,31,28,25,22,21,23,26,28,29,29,27,25,21,19,13,7,0,0,0,0,0,0,0,0,34,29,26,25,25,26,26,27,30,31,30,27,26,20,15,9,0,0,0,0,0,0,0,0,33,29,25,23,24,25,28,28,30,30,29,29,26,23,17,13,10,0,0,0,0,0,0,0,30,29,26,25,27,28,29,29,32,36,31,31,27,24,18,12,10,0,0,0,0,0,0,0,29,29,28,28,28,27,29,33,32,30,31,30,28,25,21,15,11,4,0,0,0,0,0,0,28,26,27,25,28,27,31,33,33,31,32,33,31,26,22,19,15,13,4,0,0,0,0,0,28,29,31,27,28,29,28,31,36,33,33,32,31,28,25,22,18,13,12,1,0,0,0,0,29,28,28,28,30,29,28,33,36,33,34,33,34,29,27,22,18,13,12,2,0,0,0,0],
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
