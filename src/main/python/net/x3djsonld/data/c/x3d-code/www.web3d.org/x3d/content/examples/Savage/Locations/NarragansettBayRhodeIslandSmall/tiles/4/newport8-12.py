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
    GeoLOD(center=(41.57529309331769,-71.23309215126221,0.0),range=2150.0764,child1Url=['../../tiles/5/newport16-24.x3d'],child2Url=['../../tiles/5/newport16-25.x3d'],child3Url=['../../tiles/5/newport17-24.x3d'],child4Url=['../../tiles/5/newport17-25.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport8-12.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.56722223554018,-71.24116300903972,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=7.337143E-4,zDimension=23,zSpacing=7.337143E-4,height=[48,47,45,42,39,34,26,18,10,1,0,0,0,0,0,0,0,0,0,0,0,0,0,49,49,46,43,41,35,29,21,12,1,0,0,0,0,0,0,0,0,0,0,0,0,0,49,49,46,44,41,36,30,23,14,4,0,0,0,0,0,0,0,0,0,0,0,0,0,50,49,47,45,42,38,33,25,17,8,0,0,0,0,0,0,0,0,0,0,0,0,0,50,49,48,46,43,40,34,27,19,9,1,0,0,0,0,0,0,0,0,0,0,0,0,51,49,48,46,44,41,35,27,19,8,1,0,0,0,0,0,0,0,0,0,0,0,0,51,49,47,45,43,40,34,25,17,6,1,0,0,0,0,0,0,0,0,0,0,0,0,50,49,46,44,42,39,34,26,18,8,1,0,0,0,0,0,0,0,0,0,0,0,0,50,48,45,43,41,38,33,27,19,10,1,0,0,0,0,0,0,0,0,0,0,0,0,50,48,45,42,40,37,33,26,19,11,1,0,0,0,0,0,0,0,0,0,0,0,0,49,47,44,41,38,35,31,24,17,9,0,0,0,0,0,0,0,0,0,0,0,0,0,46,44,43,40,36,30,25,20,14,7,0,0,0,0,0,0,0,0,0,0,0,0,0,45,42,40,36,33,32,29,24,14,6,0,0,0,0,0,0,0,0,0,0,0,0,0,46,42,40,38,36,32,27,21,12,5,0,0,0,0,0,0,0,0,0,0,0,0,0,46,43,40,38,35,32,25,19,10,3,0,0,0,0,0,0,0,0,0,0,0,0,0,46,42,38,35,33,29,22,15,8,2,2,1,0,0,0,0,0,0,0,0,0,0,0,45,41,37,33,28,23,19,12,5,2,2,1,0,0,0,0,0,0,0,0,0,0,0,44,39,34,31,27,23,16,7,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,43,38,33,28,23,18,14,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,40,35,31,26,22,18,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,30,27,23,19,15,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,33,27,23,18,14,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,26,22,17,12,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
