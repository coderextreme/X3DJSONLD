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
    GeoLOD(center=(41.55915137776267,-71.36222587570239,0.0),range=2150.0764,child1Url=['../../tiles/5/newport14-8.x3d'],child2Url=['../../tiles/5/newport14-9.x3d'],child3Url=['../../tiles/5/newport15-8.x3d'],child4Url=['../../tiles/5/newport15-9.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport7-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.551080519985156,-71.3702967334799,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=7.337143E-4,zDimension=24,zSpacing=7.018137E-4,height=[25,24,23,23,25,24,28,30,29,29,25,22,19,15,11,0,0,0,0,0,0,0,0,23,23,24,25,25,27,27,30,31,29,28,24,20,15,10,0,0,0,0,0,0,0,0,25,25,24,27,28,28,28,29,32,28,27,24,21,16,14,0,0,0,0,0,0,0,0,25,27,27,27,30,30,29,31,29,29,26,28,22,17,14,0,0,0,0,0,0,0,0,24,26,27,30,30,30,30,31,32,29,27,23,19,16,14,0,0,0,0,0,0,0,0,24,26,28,29,31,34,33,32,33,28,26,25,23,18,13,0,0,0,0,0,0,0,0,25,28,28,29,31,32,35,35,34,31,27,22,20,16,15,0,0,0,0,0,0,0,0,26,26,28,30,32,34,35,34,34,30,27,23,20,15,15,6,0,0,0,0,0,0,0,25,27,29,29,31,32,33,34,33,31,29,26,23,20,15,0,0,0,0,0,0,0,0,25,29,30,30,31,33,33,35,35,32,31,25,21,16,11,0,0,0,0,0,0,0,0,27,28,31,31,28,32,32,33,32,30,32,28,21,15,4,0,0,0,0,0,0,0,0,27,27,28,30,29,29,31,29,31,30,28,26,20,16,2,0,0,0,0,0,0,0,0,28,27,27,29,27,27,31,29,30,30,27,22,17,12,1,0,0,0,0,0,0,0,0,23,24,24,24,25,26,29,29,29,30,26,20,16,8,1,0,0,0,0,0,0,0,0,23,27,24,23,21,23,26,27,27,27,25,21,15,9,1,0,0,0,0,0,0,0,0,26,28,27,22,23,24,24,25,27,25,23,18,12,6,0,0,0,0,0,0,0,0,0,28,27,26,25,26,27,26,27,24,23,19,16,10,2,0,0,0,0,0,0,0,0,0,28,28,25,27,30,27,28,24,22,21,17,13,8,0,0,0,0,0,0,0,0,0,0,29,28,30,29,26,26,26,24,19,17,15,11,6,0,0,0,0,0,0,0,0,0,0,29,27,27,26,24,24,27,24,19,14,13,9,3,0,0,0,0,0,0,0,0,0,0,27,27,30,27,25,24,21,18,16,15,12,7,1,0,0,0,0,0,0,0,0,0,0,28,25,28,26,25,19,14,16,17,12,8,5,0,0,0,0,0,0,0,0,0,0,0,26,25,24,23,20,18,13,15,15,13,7,1,0,0,0,0,0,0,0,0,0,0,0,26,24,22,22,20,18,16,17,15,13,8,1,0,0,0,0,0,0,0,0,0,0,0],
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
