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
    GeoLOD(center=(41.55915137776267,-71.18466700459715,0.0),range=2150.0764,child1Url=['../../tiles/5/newport14-30.x3d'],child2Url=['../../tiles/5/newport14-31.x3d'],child3Url=['../../tiles/5/newport15-30.x3d'],child4Url=['../../tiles/5/newport15-31.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport7-15.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.551080519985156,-71.19273786237466,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=7.337143E-4,zDimension=24,zSpacing=7.018137E-4,height=[11,13,12,9,5,6,9,13,18,24,28,31,33,37,33,30,29,28,28,27,26,23,22,10,11,13,8,4,6,10,14,20,26,28,30,31,32,33,31,30,30,30,29,27,25,24,8,9,8,4,4,7,11,15,21,25,27,28,29,30,32,33,33,32,30,29,28,27,26,5,4,1,2,6,9,13,18,23,26,27,28,29,30,33,36,35,31,29,29,31,29,28,2,2,3,5,8,11,16,21,25,27,28,29,29,31,33,32,31,30,29,30,30,30,29,2,3,4,6,9,12,18,23,27,28,29,30,31,31,31,29,28,27,28,29,28,28,29,2,3,4,7,10,14,20,25,27,29,30,32,31,29,27,26,24,23,24,26,27,29,30,2,2,4,7,11,16,22,27,28,30,31,29,27,24,22,22,21,21,23,26,29,29,29,1,1,3,7,13,17,21,25,29,30,29,25,23,21,20,20,19,21,23,25,27,28,28,1,1,3,7,12,17,21,25,28,29,27,23,20,19,18,17,17,20,21,23,24,26,26,0,2,5,8,12,16,21,24,27,27,24,21,19,18,16,16,16,16,16,19,23,24,26,1,2,4,7,11,16,21,24,27,26,23,20,17,16,16,16,16,16,16,17,22,25,26,1,2,5,7,11,15,20,22,24,23,21,19,17,16,16,16,16,18,19,18,22,25,27,1,1,4,7,11,15,18,21,23,20,19,18,17,16,16,16,18,20,21,22,23,25,27,1,1,3,6,10,14,18,20,21,19,17,17,18,16,17,18,20,20,20,20,21,24,27,0,1,2,6,11,15,17,19,19,18,17,17,17,16,17,18,19,19,19,20,22,24,27,1,1,1,4,10,14,17,17,16,16,17,17,17,17,18,18,18,19,19,20,22,25,27,1,0,1,3,8,12,15,15,14,14,16,16,16,17,18,18,19,19,20,21,24,26,25,1,0,0,1,6,10,13,13,12,13,14,15,16,17,18,18,19,20,21,23,23,23,23,1,1,1,1,4,7,9,10,9,10,13,15,15,16,17,18,17,19,20,21,20,21,25,1,1,1,1,2,4,4,4,6,10,12,13,14,16,16,15,14,15,16,17,20,22,25,1,1,1,1,1,1,2,4,7,9,10,12,13,13,11,11,12,14,16,20,21,22,23,1,1,1,1,1,1,1,4,6,7,8,10,12,10,10,10,12,15,18,20,20,21,22,1,1,1,1,1,1,1,3,6,7,8,9,11,10,9,10,13,15,18,19,20,21,22],
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
