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
    GeoViewpoint(description='GeoViewpoint_3_43',geoSystem=['GDC'],position=(41.11691829101653,28.956771138722615,14302.317091352961),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])),
    GeoLOD(center=(41.11691829101653,28.956771138722615,0.0),range=17162.781,child1Url=['../../tiles/4/bosphorus8-6.x3d'],child2Url=['../../tiles/4/bosphorus8-7.x3d'],child3Url=['../../tiles/4/bosphorus9-6.x3d'],child4Url=['../../tiles/4/bosphorus9-7.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/bosphorus4-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.06225017873692,28.882589547476528,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0070649134,zDimension=22,zSpacing=0.0052064867,height=[74,81,65,87,112,103,64,14,8,42,47,73,31,57,90,77,74,61,83,63,7,7,106,73,86,99,115,94,54,62,1,25,84,96,44,93,112,109,73,77,103,40,51,69,115,93,87,110,109,115,104,91,67,-6,81,88,94,56,108,96,74,78,89,43,60,90,124,119,120,105,79,73,90,103,18,1,8,42,113,96,100,123,118,120,130,104,105,113,138,142,139,89,52,47,54,19,63,12,50,8,45,104,120,114,101,94,127,96,131,148,140,135,122,87,55,79,80,99,19,7,83,72,6,79,88,69,87,97,130,141,135,133,135,112,77,74,88,105,105,84,79,36,61,71,22,8,75,86,105,124,136,125,136,137,94,77,100,106,85,79,96,42,51,15,13,77,75,10,13,47,97,127,117,100,118,108,92,92,100,85,75,61,60,7,30,64,20,78,94,82,9,76,121,129,117,82,87,76,110,131,106,79,55,24,35,51,44,69,64,100,107,68,16,73,87,123,94,78,50,47,153,157,125,115,98,49,73,69,24,65,82,67,55,21,53,89,103,102,87,68,85,79,165,149,125,106,79,57,33,84,83,60,79,60,76,57,25,24,80,86,98,111,118,115,122,93,135,126,83,77,31,95,88,82,73,102,33,18,11,17,27,75,73,96,129,135,102,65,104,96,22,22,28,77,77,99,88,48,16,108,34,77,31,55,104,99,104,74,49,72,46,31,32,69,90,74,81,97,76,21,99,101,71,97,79,44,92,125,109,97,106,145,112,32,39,74,111,99,63,98,79,35,92,108,116,71,118,87,62,89,101,78,82,60,68,66,87,93,118,75,84,85,94,81,36,117,82,119,128,89,57,108,111,93,124,24,45,75,92,78,101,97,92,101,33,84,92,105,110,138,124,51,124,98,120,93,61,29,73,42,57,70,63,59,40,67,90,62,109,116,151,125,165,112,130,117,109,113,32,34,46,71,24,24,49,56,92,52,86,120,124,137,147,177,169,104,166,133,51,70,111,35,70,59,25,45,54,69,76,107,95,153,144,160,142,177,112,143,146,48,8,6,106,34,67,57,25,47,55,66,77,110,87,153,148,161,141,174,110,144,141,57,6,4],
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
