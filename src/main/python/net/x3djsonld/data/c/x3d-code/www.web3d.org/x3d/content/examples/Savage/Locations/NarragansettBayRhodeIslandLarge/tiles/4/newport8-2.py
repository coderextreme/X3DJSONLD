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
    GeoLOD(center=(41.52473004175595,-71.68129407658296,0.0),range=6150.5674,child1Url=['../../tiles/5/newport16-4.x3d'],child2Url=['../../tiles/5/newport16-5.x3d'],child3Url=['../../tiles/5/newport17-4.x3d'],child4Url=['../../tiles/5/newport17-5.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport8-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.70327943062637,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[27,28,45,60,73,78,64,54,51,39,37,47,27,26,34,33,33,26,29,38,41,43,27,31,42,64,71,73,72,64,58,48,38,46,29,26,33,37,34,35,31,33,36,38,21,49,54,59,60,67,67,63,58,52,37,33,29,26,29,32,35,34,31,35,35,37,29,44,48,46,51,55,50,56,57,40,37,32,30,30,37,37,39,41,35,33,39,40,32,36,37,34,43,56,49,39,48,40,34,34,36,34,38,44,45,43,41,40,40,44,38,34,34,41,57,69,72,57,37,35,36,39,35,35,42,44,42,45,42,43,48,55,32,36,29,38,53,74,78,71,51,44,37,35,38,44,47,57,57,46,48,45,52,52,36,32,32,40,55,70,72,72,46,38,38,46,65,65,70,74,62,50,56,48,42,43,47,42,37,42,52,61,60,47,47,46,40,43,59,80,85,74,67,53,46,45,47,44,51,47,41,47,52,48,54,45,44,39,45,47,59,82,83,62,51,51,46,45,51,55,33,44,49,42,39,40,41,41,40,40,37,54,59,77,71,59,46,52,52,55,76,81,31,38,37,39,40,30,38,41,38,39,41,48,55,54,53,51,50,64,60,65,81,83,42,32,32,43,45,48,51,49,57,44,44,38,38,38,51,53,61,58,65,78,76,78,43,41,29,28,47,44,42,56,56,47,41,39,39,40,50,51,57,65,64,71,80,84,37,47,37,36,35,29,38,40,40,39,35,39,39,46,46,57,60,67,76,83,83,85,41,45,49,43,41,37,39,43,38,34,31,38,42,53,62,65,79,85,87,95,100,101,44,45,46,53,44,37,39,40,38,36,43,46,66,70,72,84,89,89,94,102,105,104,40,45,48,45,36,36,34,33,31,41,43,60,78,86,92,93,92,92,100,105,99,102,42,48,44,39,32,33,37,32,48,53,53,71,87,102,100,100,98,97,98,101,100,100,52,53,45,36,37,42,48,59,58,61,75,81,99,108,109,107,100,104,102,105,107,106,57,59,41,38,39,51,59,52,49,59,78,88,97,109,110,107,103,101,109,119,126,124,56,57,42,40,41,52,59,52,50,58,78,90,97,108,110,106,102,101,109,118,125,126],
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
