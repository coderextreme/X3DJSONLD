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
    GeoLOD(center=(41.573110194091946,-71.72526478466978,0.0),range=6150.5674,child1Url=['../../tiles/5/newport18-2.x3d'],child2Url=['../../tiles/5/newport18-3.x3d'],child3Url=['../../tiles/5/newport19-2.x3d'],child4Url=['../../tiles/5/newport19-3.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport9-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.54892011792395,-71.74725013871318,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[54,57,63,62,64,81,89,92,76,81,95,102,94,77,66,60,57,49,42,55,55,56,61,72,74,71,81,97,105,103,92,87,104,102,98,76,59,56,51,47,44,53,51,52,72,79,82,85,96,112,121,103,92,96,107,103,91,72,60,54,49,43,61,55,50,48,80,82,101,110,119,121,119,104,96,95,105,97,78,63,52,49,48,47,51,61,59,56,90,100,111,125,127,124,113,98,90,96,101,87,68,50,50,44,44,46,42,53,55,51,103,120,130,129,126,109,94,88,87,95,85,65,50,47,45,45,41,44,44,43,42,36,123,129,135,126,109,87,86,87,93,80,66,47,44,48,51,46,42,46,52,50,41,41,129,132,128,111,91,89,88,82,83,70,45,45,54,50,51,41,46,44,52,46,53,53,127,122,107,88,82,81,80,77,64,50,53,45,45,44,40,41,35,47,52,59,61,61,119,104,90,76,69,70,70,63,59,54,56,52,54,45,39,37,44,46,54,69,69,75,95,89,78,71,67,74,76,60,51,57,58,57,52,55,50,36,42,48,66,88,98,102,85,76,70,75,84,80,64,57,53,49,53,50,47,48,47,53,46,51,78,105,118,120,83,75,75,85,82,69,70,59,55,43,41,46,46,37,37,42,46,63,91,111,131,132,73,74,79,75,68,62,64,63,60,53,48,43,37,40,40,41,52,72,98,117,129,134,69,71,70,65,67,64,73,91,58,50,39,39,39,41,48,44,51,73,99,114,132,133,72,67,72,65,65,84,98,94,54,43,42,43,41,39,44,49,54,70,97,115,122,119,67,65,68,79,87,100,115,87,74,58,57,53,48,49,39,51,56,71,88,108,111,109,67,69,78,105,118,129,132,125,93,72,58,59,54,43,51,51,50,65,76,81,85,83,78,91,111,125,134,131,124,121,101,69,55,44,50,46,47,56,72,79,79,78,77,78,92,111,126,139,133,124,115,106,78,63,51,43,45,43,50,56,71,75,79,74,86,91,101,121,141,133,111,97,88,68,55,48,46,48,48,49,49,62,64,73,70,73,84,89,100,122,140,131,108,95,85,65,54,47,45,49,50,48,49,62,66,76,70,75,83,90],
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
