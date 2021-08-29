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
    GeoViewpoint(description='GeoViewpoint_3_35',geoSystem=['GDC'],position=(41.0075820664573,29.253497503706967,14302.317091352961),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])),
    GeoLOD(center=(41.0075820664573,29.253497503706967,0.0),range=17162.781,child1Url=['../../tiles/4/bosphorus6-10.x3d'],child2Url=['../../tiles/4/bosphorus6-11.x3d'],child3Url=['../../tiles/4/bosphorus7-10.x3d'],child4Url=['../../tiles/4/bosphorus7-11.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/bosphorus3-5.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.95291395417769,29.17931591246088,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0070649134,zDimension=22,zSpacing=0.0052064867,height=[311,255,219,205,196,182,259,233,237,287,468,446,325,232,201,186,163,157,149,124,120,133,291,223,208,188,196,206,222,220,212,287,393,294,243,186,186,168,158,127,130,156,156,173,261,294,201,189,243,201,189,204,223,323,274,225,215,186,160,154,128,140,109,145,190,188,207,210,197,208,167,175,183,177,206,192,181,185,183,164,148,133,109,101,96,95,191,174,244,203,168,174,164,175,166,162,163,151,149,158,152,137,123,127,189,151,129,109,120,150,316,267,219,157,149,152,164,151,141,133,129,129,132,133,160,202,179,179,144,110,91,79,218,192,197,164,148,129,147,140,126,129,113,111,118,137,175,286,252,185,164,139,123,117,193,192,165,154,137,127,120,125,117,112,103,105,113,146,163,266,250,204,171,194,143,136,167,177,167,155,133,123,123,117,108,111,107,97,111,131,172,206,253,196,248,204,149,144,150,163,157,155,137,119,116,130,122,100,97,95,109,131,141,161,168,144,218,177,157,151,143,156,145,148,129,118,115,121,127,120,116,89,124,109,125,129,118,118,153,151,121,140,141,146,145,151,131,117,116,112,120,115,109,94,119,100,103,104,127,92,91,113,98,115,132,144,140,141,144,130,132,115,135,131,115,125,106,111,98,95,105,93,71,84,93,111,128,128,141,144,136,133,132,113,131,139,152,152,81,98,102,129,92,163,95,60,79,71,129,131,154,150,134,130,134,117,106,128,164,138,89,75,73,90,114,80,74,62,59,62,131,146,155,149,148,133,121,123,105,109,142,114,98,92,130,145,185,141,92,82,90,102,117,148,153,162,144,124,122,109,105,100,103,95,97,121,125,142,174,136,130,126,96,112,141,152,158,182,157,152,135,119,118,124,147,130,144,161,150,186,172,168,169,144,147,140,147,188,161,179,186,180,148,149,126,128,165,157,144,162,173,257,327,306,273,216,150,153,174,177,178,193,218,214,196,149,137,148,176,182,187,174,182,235,271,250,223,193,159,142,200,182,209,244,283,276,197,192,161,162,189,167,186,159,194,225,266,287,264,173,151,128,200,184,205,240,291,283,199,194,165,162,189,166,185,156,193,232,274,294,263,179,144,128],
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
