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
    GeoViewpoint(description='GeoViewpoint_3_52',geoSystem=['GDC'],position=(41.22625451557576,28.80840795623044,14302.317091352961),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])),
    GeoLOD(center=(41.22625451557576,28.80840795623044,0.0),range=17162.781,child1Url=['../../tiles/4/bosphorus10-4.x3d'],child2Url=['../../tiles/4/bosphorus10-5.x3d'],child3Url=['../../tiles/4/bosphorus11-4.x3d'],child4Url=['../../tiles/4/bosphorus11-5.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/bosphorus5-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.171586403296146,28.73422636498435,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0070649134,zDimension=22,zSpacing=0.0052064867,height=[92,32,110,60,74,90,135,207,207,173,149,104,162,159,115,147,109,122,55,62,128,106,31,126,127,97,139,155,197,206,164,176,127,150,127,110,115,141,115,98,43,96,54,86,128,94,169,142,166,176,171,194,104,159,82,71,144,74,96,45,40,84,69,106,80,86,130,99,153,168,164,174,157,150,96,62,75,59,84,84,106,50,75,64,99,94,98,98,119,138,164,170,148,131,128,58,73,154,120,159,142,64,82,101,89,95,106,83,48,36,139,142,141,152,105,76,61,152,125,141,136,127,97,86,81,103,94,105,121,93,36,35,122,160,146,96,95,66,120,180,104,159,95,82,106,96,115,91,120,106,127,48,38,45,137,141,102,109,72,73,120,152,149,122,104,118,122,106,109,151,124,128,85,55,75,93,144,105,100,82,65,67,98,152,151,116,154,144,118,123,114,165,121,94,51,88,87,104,142,107,89,65,71,93,81,108,153,137,120,115,144,155,152,99,93,65,61,101,61,69,112,84,68,65,82,109,76,119,130,122,119,107,168,105,88,56,88,64,73,102,58,76,92,71,72,70,86,101,81,112,96,129,134,168,152,94,60,81,106,84,99,95,68,63,73,75,77,71,105,115,104,116,134,165,157,158,108,61,66,73,132,97,101,110,80,72,72,98,90,78,100,126,120,95,137,114,142,113,103,63,91,72,89,133,89,129,73,90,84,110,96,93,100,94,120,81,105,137,116,111,69,80,99,88,117,114,105,104,86,101,98,146,99,99,99,97,154,125,129,119,107,67,93,109,86,108,87,101,146,101,111,117,94,111,117,112,99,68,104,121,112,103,81,88,120,120,77,103,89,100,124,97,115,132,93,119,136,130,105,120,100,131,105,94,97,92,129,123,86,107,105,80,97,99,130,127,119,124,146,91,105,138,98,117,129,111,74,88,112,120,85,87,73,84,64,82,134,134,104,101,146,123,105,119,109,145,96,87,106,112,140,105,99,130,104,64,40,27,85,72,106,105,138,130,112,134,144,136,92,133,69,96,130,86,96,73,96,104,55,31,55,57,109,115,141,129,116,132,141,133,92,131,54,89,130,79,97,74,88,105,59,35,56,55],
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
