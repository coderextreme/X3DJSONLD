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
    GeoLOD(center=(41.55915137776267,-71.23309215126221,0.0),range=2150.0764,child1Url=['../../tiles/5/newport14-24.x3d'],child2Url=['../../tiles/5/newport14-25.x3d'],child3Url=['../../tiles/5/newport15-24.x3d'],child4Url=['../../tiles/5/newport15-25.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport7-12.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.551080519985156,-71.24116300903972,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=7.337143E-4,zDimension=24,zSpacing=7.018137E-4,height=[45,46,46,45,41,37,33,25,18,10,6,1,0,0,0,0,0,0,0,0,0,0,0,46,46,46,45,41,37,31,25,18,11,8,2,0,0,0,0,0,0,0,0,0,0,0,46,46,45,44,40,36,29,24,18,12,7,3,0,0,0,0,0,0,0,0,0,0,0,46,46,45,43,38,33,27,21,16,12,6,1,1,0,0,0,0,0,0,0,0,0,0,46,46,44,41,37,31,25,19,14,10,3,1,1,0,0,0,0,0,0,0,0,0,0,46,46,43,40,34,29,23,17,12,5,1,1,2,0,0,0,0,0,0,0,0,0,0,45,44,41,36,31,26,20,15,8,2,1,1,0,0,0,0,0,0,0,0,0,0,0,40,40,38,35,30,24,17,12,6,1,0,0,0,0,0,0,0,0,0,0,0,0,0,45,38,29,28,27,21,14,9,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,41,37,31,20,17,15,12,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,34,31,27,16,7,6,6,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,18,13,10,8,6,3,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,20,23,23,21,19,14,8,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,33,31,29,23,17,11,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,41,40,36,30,23,17,11,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,43,40,35,31,25,17,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,42,38,35,31,23,19,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,44,41,35,30,23,16,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,45,42,38,33,26,18,14,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,46,44,40,35,28,23,17,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,46,45,42,38,33,27,21,11,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,46,45,43,40,37,29,22,16,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,47,47,44,41,39,33,25,19,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,48,47,45,42,39,34,26,18,10,1,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
