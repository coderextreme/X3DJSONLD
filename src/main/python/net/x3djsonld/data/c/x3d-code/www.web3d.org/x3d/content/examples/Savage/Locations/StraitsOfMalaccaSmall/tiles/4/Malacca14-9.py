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
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(url=['../../images/4/Malacca14-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(4.979361030700214,102.54606267847167,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[254,220,146,146,183,431,311,175,160,149,198,670,198,443,522,482,562,743,1081,525,238,83,192,224,161,147,147,202,152,157,168,149,159,479,181,157,454,172,624,903,788,528,328,78,194,184,155,145,144,145,146,146,146,151,149,157,145,398,306,159,374,649,811,875,413,217,216,292,250,151,145,145,147,141,152,145,194,157,167,148,388,144,152,470,374,664,360,228,202,326,276,269,143,141,159,149,168,162,222,424,187,149,156,140,145,285,266,315,296,48,284,256,339,190,143,180,143,168,190,153,389,423,220,169,246,157,181,176,282,81,107,59,213,263,151,168,144,262,142,214,247,256,259,162,185,291,263,282,303,534,405,218,62,50,304,196,188,143,156,149,156,251,206,631,290,212,175,269,161,254,247,401,367,116,10,25,318,250,244,143,262,146,145,221,331,731,402,384,301,245,161,161,180,122,316,31,28,20,380,440,396,289,189,141,147,236,428,502,261,501,255,161,157,386,163,168,49,30,19,19,679,512,401,391,190,153,247,314,249,619,265,384,321,159,143,445,343,211,41,111,36,32,513,420,473,377,156,151,709,229,270,378,221,207,154,160,179,156,388,46,68,49,32,27,282,336,487,363,209,151,556,267,252,319,151,228,156,147,152,166,61,37,79,156,47,40,326,295,371,325,151,156,435,242,158,237,147,199,153,133,152,148,162,44,39,28,28,24,428,260,306,280,281,167,311,151,201,241,231,352,512,158,73,243,305,50,24,22,28,28,299,280,286,309,360,180,205,167,153,259,330,190,307,181,212,58,202,49,30,22,57,44,294,274,296,543,500,174,203,186,157,377,388,179,252,356,349,75,59,79,53,69,130,30,290,300,337,539,746,213,154,398,338,401,363,267,271,443,460,72,64,33,145,224,92,148,456,345,316,446,717,320,196,597,526,660,502,274,304,733,312,88,63,34,203,24,12,8,453,415,373,456,436,549,184,457,503,610,595,324,111,340,414,60,64,37,57,34,19,22,512,412,606,482,583,592,181,370,683,540,449,212,94,83,167,106,149,71,45,18,24,19,569,655,473,678,513,409,191,209,409,619,519,189,48,52,79,67,217,91,42,31,14,55,552,648,477,693,509,417,194,217,382,636,497,218,47,60,70,60,217,92,32,31,20,54],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])))])
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
