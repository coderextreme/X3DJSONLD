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
    GeoLOD(center=(41.68828510220285,-71.23309215126221,0.0),range=2150.0764,child1Url=['../../tiles/5/newport30-24.x3d'],child2Url=['../../tiles/5/newport30-25.x3d'],child3Url=['../../tiles/5/newport31-24.x3d'],child4Url=['../../tiles/5/newport31-25.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport15-12.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.680214244425336,-71.24116300903972,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=7.337143E-4,zDimension=23,zSpacing=7.337143E-4,height=[28,33,38,40,39,35,29,21,15,10,3,1,1,1,1,1,1,1,1,1,1,1,1,26,31,35,36,34,31,27,20,13,8,4,1,1,1,1,1,1,1,1,1,1,1,1,24,28,32,33,31,29,25,19,13,9,3,1,1,1,1,1,1,1,1,1,1,1,1,22,26,29,31,30,28,24,18,13,9,4,1,1,1,1,1,1,1,1,1,1,1,1,21,24,27,29,28,26,24,18,13,8,2,1,1,1,1,1,1,1,1,1,1,1,1,20,23,26,27,26,24,21,18,12,5,1,1,1,1,1,1,1,1,1,1,1,1,1,18,21,24,25,23,21,19,15,9,1,1,1,1,1,1,1,1,1,1,1,1,1,1,17,19,22,24,23,20,16,11,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,17,19,21,22,21,18,13,6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,17,19,20,20,18,16,10,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,17,18,18,18,15,11,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,15,16,16,15,11,6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,14,14,13,10,7,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,12,12,11,7,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,9,10,9,5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,7,7,6,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1],
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
