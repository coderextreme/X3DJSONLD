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
    GeoLOD(center=(41.62149034642794,-71.72526478466978,0.0),range=6150.5674,child1Url=['../../tiles/5/newport20-2.x3d'],child2Url=['../../tiles/5/newport20-3.x3d'],child3Url=['../../tiles/5/newport21-2.x3d'],child4Url=['../../tiles/5/newport21-3.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport10-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.59730027025994,-71.74725013871318,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[100,122,140,131,108,95,85,65,54,47,45,49,50,48,49,62,66,76,70,75,83,90,115,126,122,102,86,64,53,50,43,54,54,59,57,57,50,57,66,65,66,75,90,93,113,111,97,72,60,48,41,42,53,59,61,62,57,56,52,57,57,58,65,70,89,95,98,88,65,56,50,47,42,48,58,60,62,63,59,54,58,60,65,68,70,80,90,96,84,67,57,52,50,43,47,52,60,65,68,61,52,52,66,69,73,74,77,84,86,96,73,59,52,48,51,52,50,52,51,61,65,60,55,47,60,73,81,83,92,91,85,82,65,52,50,48,53,51,56,62,61,55,53,52,52,56,62,76,84,89,92,89,80,71,60,55,53,54,55,69,75,83,71,56,58,63,49,52,67,74,92,101,100,98,85,80,63,63,57,64,70,85,108,95,85,59,63,62,50,51,61,76,93,104,104,108,87,85,66,67,69,75,92,97,100,92,70,59,59,55,54,52,66,79,96,109,107,101,100,98,69,75,78,89,98,107,95,79,60,59,63,54,52,56,62,86,105,111,107,111,111,110,78,77,97,106,107,113,90,69,58,60,55,58,54,57,67,84,105,120,125,131,121,119,87,100,112,122,110,105,94,70,60,62,61,72,71,59,79,86,101,116,133,134,139,140,103,115,128,125,111,100,85,75,64,68,67,76,72,64,76,82,99,109,126,144,143,143,101,118,136,128,114,97,76,72,74,71,78,80,68,68,67,74,82,95,119,138,147,143,114,129,127,126,118,96,79,72,70,83,100,86,77,70,68,64,71,92,115,125,130,135,133,132,129,121,108,95,82,79,84,103,110,97,73,68,65,65,67,92,108,122,129,133,142,139,134,126,117,98,94,86,101,113,111,101,84,76,71,68,72,92,108,118,130,134,147,143,133,122,106,99,88,97,129,132,116,100,84,75,68,72,74,92,111,122,134,136,153,147,135,114,97,92,87,122,144,140,119,100,72,71,69,73,80,92,108,119,132,134,154,142,129,115,99,86,110,141,145,130,108,82,73,74,79,80,93,97,107,123,134,136,154,142,128,114,99,86,112,141,145,129,105,81,73,74,79,82,93,99,107,125,133,136],
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
