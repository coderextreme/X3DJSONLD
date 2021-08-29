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
    GeoLOD(center=(41.573110194091946,-71.68129407658296,0.0),range=6150.5674,child1Url=['../../tiles/5/newport18-4.x3d'],child2Url=['../../tiles/5/newport18-5.x3d'],child3Url=['../../tiles/5/newport19-4.x3d'],child4Url=['../../tiles/5/newport19-5.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport9-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.54892011792395,-71.70327943062637,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[56,57,42,40,41,52,59,52,50,58,78,90,97,108,110,106,102,101,109,118,125,126,52,37,41,44,48,47,51,59,54,63,85,93,95,108,102,100,105,112,112,120,127,126,48,44,48,46,49,57,61,54,55,68,83,95,97,103,105,116,119,118,126,126,135,135,56,52,58,53,51,56,64,64,62,63,75,91,93,102,112,123,137,140,142,143,140,137,51,50,44,67,58,60,56,63,64,64,71,79,93,108,118,127,139,143,146,146,138,136,36,37,46,52,69,70,81,67,67,64,70,82,99,104,115,130,138,143,144,141,127,129,41,43,58,61,78,91,86,80,84,81,74,92,98,108,125,133,142,149,149,139,126,124,53,49,50,64,87,94,86,81,75,80,87,94,102,110,122,136,146,155,158,153,131,128,61,61,46,58,71,86,87,84,72,75,80,93,97,108,119,135,153,156,155,158,148,147,75,66,61,58,59,61,61,61,61,76,77,84,93,110,124,138,147,148,158,162,148,145,102,102,97,79,70,69,61,66,83,83,76,75,91,104,119,133,144,155,161,158,146,139,120,125,120,114,91,76,73,81,92,87,80,77,81,98,114,129,136,147,155,155,146,143,132,131,124,107,92,80,87,95,94,91,85,82,84,95,108,116,128,142,139,147,148,151,134,131,123,111,87,87,99,95,90,93,89,84,81,91,102,118,127,132,137,138,142,143,133,124,121,102,95,112,106,98,100,93,90,89,85,100,115,126,128,133,134,140,140,140,119,117,105,100,114,122,106,103,103,100,93,90,91,106,119,129,132,130,136,141,141,145,109,94,95,108,118,112,115,115,112,96,89,89,98,104,119,126,131,128,136,142,146,146,83,81,88,108,111,109,110,117,114,99,88,95,107,110,113,118,121,126,129,133,142,147,78,92,106,103,108,127,123,113,104,102,94,106,111,111,121,121,127,126,124,133,140,146,91,111,126,133,138,149,136,122,112,109,106,105,111,104,111,121,122,128,127,134,141,149,89,113,132,147,148,156,153,137,126,123,127,124,112,109,104,118,122,122,131,137,148,150,90,115,132,147,148,154,153,140,128,121,128,126,114,108,104,119,122,121,130,138,149,151],
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
