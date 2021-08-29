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
    GeoLOD(center=(41.68828510220285,-71.18466700459715,0.0),range=2150.0764,child1Url=['../../tiles/5/newport30-30.x3d'],child2Url=['../../tiles/5/newport30-31.x3d'],child3Url=['../../tiles/5/newport31-30.x3d'],child4Url=['../../tiles/5/newport31-31.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport15-15.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.680214244425336,-71.19273786237466,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=7.337143E-4,zDimension=23,zSpacing=7.337143E-4,height=[2,4,5,7,9,10,11,15,19,27,38,46,51,58,65,68,73,73,71,70,61,57,55,1,3,6,7,9,10,11,14,18,22,28,39,44,50,61,64,67,69,68,64,59,57,55,1,2,7,8,9,11,12,14,16,19,25,32,38,45,53,60,62,64,64,61,60,59,60,1,3,5,7,10,12,13,15,18,21,25,31,36,40,47,55,57,59,59,59,60,61,63,1,3,5,8,10,12,13,16,18,22,26,29,34,37,42,50,54,55,56,57,59,62,62,2,5,6,8,9,11,12,15,18,23,26,28,32,34,38,44,48,52,55,57,58,60,61,1,4,6,8,9,10,12,15,17,20,25,28,30,33,37,41,45,48,54,57,56,57,58,1,2,5,8,8,10,11,15,18,19,23,29,30,31,35,39,43,45,49,52,53,54,56,1,1,2,5,8,9,10,14,17,19,22,27,29,30,33,37,41,44,46,48,50,51,54,1,1,1,1,4,7,8,11,15,17,20,23,25,28,31,35,40,43,45,46,47,49,52,1,1,1,1,1,4,6,7,10,15,18,21,23,26,29,33,37,41,43,44,45,46,49,1,1,1,1,1,1,3,5,7,11,16,19,21,24,27,30,34,38,40,41,42,43,45,1,1,1,1,1,1,1,3,6,10,14,15,18,20,24,29,33,36,38,39,40,41,42,1,1,1,1,1,1,1,1,3,6,9,10,11,16,20,27,31,34,37,37,39,40,40,1,1,1,1,1,1,1,1,1,3,4,5,10,13,17,21,27,31,34,35,37,38,39,1,1,1,1,1,1,1,1,1,1,2,4,6,9,15,18,23,27,29,31,34,35,36,1,1,1,1,1,1,1,1,1,1,1,2,6,9,10,13,20,24,26,28,30,32,33,1,1,1,1,1,1,1,1,1,1,1,1,4,8,11,13,16,20,24,27,29,30,31,1,1,1,1,1,1,1,1,1,1,1,1,1,4,9,12,13,17,20,25,26,27,28,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,10,12,14,16,18,21,23,25,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,7,12,15,16,16,17,19,21,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,10,14,17,17,18,18,19,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,8,13,17,18,18,18,19],
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
