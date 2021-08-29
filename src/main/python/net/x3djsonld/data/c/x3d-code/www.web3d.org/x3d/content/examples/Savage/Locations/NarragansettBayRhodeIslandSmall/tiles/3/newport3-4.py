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
    GeoLOD(center=(41.551080519985156,-71.28958815570479,0.0),range=4300.153,child1Url=['../../tiles/4/newport6-8.x3d'],child2Url=['../../tiles/4/newport6-9.x3d'],child3Url=['../../tiles/4/newport7-8.x3d'],child4Url=['../../tiles/4/newport7-9.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport3-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.53493880443013,-71.30572987125981,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=0.0014036275,zDimension=21,zSpacing=0.0016141715,height=[29,24,22,28,35,41,42,42,46,46,43,39,37,40,43,45,54,54,56,54,56,59,54,55,25,18,21,30,37,44,51,47,50,48,46,43,41,40,46,45,51,58,55,54,56,56,64,65,12,15,22,29,37,45,47,54,51,51,47,43,43,43,46,52,52,53,56,54,54,57,60,62,17,19,22,28,37,44,52,51,50,52,46,46,46,45,48,49,55,54,53,54,52,54,62,64,18,23,25,30,41,53,54,52,48,49,49,49,48,49,52,52,53,55,58,55,59,54,55,59,15,23,27,37,46,53,53,51,49,47,51,48,50,54,55,56,57,54,56,54,54,55,55,56,15,19,28,38,52,55,49,48,44,47,50,51,48,50,56,58,60,56,52,56,57,53,53,54,14,22,25,35,46,53,49,48,47,50,54,52,51,51,53,56,56,55,55,57,55,56,56,56,23,28,25,30,42,48,51,47,48,46,53,51,50,59,56,50,56,57,58,58,55,53,61,61,28,32,30,30,35,46,48,49,50,44,50,50,59,55,53,53,54,62,64,60,49,48,58,58,29,25,28,29,31,41,46,48,48,46,50,48,57,54,52,51,60,65,59,55,48,48,56,57,17,18,22,22,28,37,47,44,42,42,41,48,49,49,50,54,57,59,54,49,48,48,59,61,7,11,11,21,28,34,40,40,38,39,37,36,41,47,48,55,59,57,52,48,48,48,56,56,0,9,16,22,32,37,44,39,36,26,29,34,42,48,54,56,61,59,56,48,48,48,50,57,0,8,21,26,34,38,41,36,25,23,30,39,48,46,58,60,59,63,57,50,48,53,56,55,0,2,15,26,34,38,35,29,20,23,27,38,48,54,56,57,60,61,55,57,56,59,59,57,0,0,1,22,28,33,30,24,20,17,22,38,46,51,52,53,54,52,47,56,60,60,59,58,0,0,0,11,20,24,26,25,16,18,28,35,43,49,50,51,46,34,44,50,58,61,58,57,0,0,0,0,12,22,24,20,16,18,25,37,42,43,51,55,37,32,33,40,45,51,50,53,0,0,0,0,0,12,17,13,13,17,25,31,39,40,51,56,38,32,32,32,32,40,45,46,0,0,0,0,0,11,16,12,12,17,24,32,38,41,51,53,33,32,32,32,32,40,44,45],
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
