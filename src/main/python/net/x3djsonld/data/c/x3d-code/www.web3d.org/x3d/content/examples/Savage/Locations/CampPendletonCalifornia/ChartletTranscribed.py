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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='ChartletTranscribed.x3d',name='title'),
    meta(content='Manually derived bathymetry offshore Camp Pendleton California.',name='description'),
    meta(content='Don Brutzman and OS3 Bruce Goldin USN',name='creator'),
    meta(content='16 March 2001',name='created'),
    meta(content='21 February 2010',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Locations/CampPendletonCalifornia/ChartletTranscribed.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(groundColor=[(0.2,0.2,0.5)],skyColor=[(0.4,0.4,1)]),
    DirectionalLight(direction=(0,-1,0)),
    NavigationInfo(speed=100,type=["EXAMINE","WALK","FLY","ANY"]),
    Transform(rotation=(0,1,0,-1.57),translation=(-2000,1000,2464),
      children=[
      Viewpoint(description='Chartlet view',orientation=(1,0,0,-0.3))]),
    #  Soundings in feet, converted to meters (1m = 39.3", 39.3" / 12" = 3.275). 
    Switch(whichChoice=0,
      #  Simple ElevationGrid, not georeferenced to latitude/longitude 
      children=[
      Group(
        children=[
        Transform(scale=(1,3.275,1),
          children=[
          Shape(
            geometry=ElevationGrid(DEF='BathymetryGrid',creaseAngle=3.14,solid=False,xDimension=31,xSpacing=154,zDimension=29,zSpacing=184,
              color=Color(DEF='BathymetryGridColorNodeCalculated',color=[(0,0,0)])),
            appearance=Appearance(
              material=Material(diffuseColor=(0,0,0.25)))),
          Script(DEF='CalculateColorSchemeMEDAL',
            #  inputUnits are 'feet' or 'meters' - heightValuesOutput is always in meters. 
            field=[
            field(accessType='initializeOnly',name='inputUnits',type='SFString',value='feet'),
            field(accessType='initializeOnly',name='heightValues',type='MFFloat',value=[-101,-90,-84,-78,-72,-72,-70,-65,-62,-63,-55,-53,-50,-50,-47,-45,-45,-43,-42,-41,-38,-37,-37,-36,-34,-31,-31,-27,-26,-25,-23,-101,-90,-84,-78,-72,-72,-66,-66,-64,-58,-55,-53,-50,-48,-46,-45,-43,-42,-42,-39,-39,-37,-36,-34,-32,-31,-27,-26,-21,-24,-19,-86,-84,-78,-73,-72,-66,-66,-61,-57,-55,-52,-49,-48,-46,-45,-46,-45,-38,-38,-36,-33,-32,-32,-31,-30,-30,-25,-24,-22,-15,-9,-84,-78,-75,-72,-66,-65,-63,-58,-55,-53,-49,-47,-47,-45,-43,-42,-40,-39,-37.5,-35.5,-34,-32.5,-31,-32,-28,-26,-24,-21,-20,-8.5,-5,-79,-72,-70,-66,-66,-60,-57,-54,-52,-49,-48,-46,-44,-43,-43,-40,-40,-39,-36,-34,-33,-32,-31,-28,-26,-24,-22,-20,-10,-5,0,-81,-72,-66,-63,-60,-58,-57,-54,-51,-49,-46,-46,-44,-42,-41,-40,-40,-41,-35.5,-35,-33,-31,-28,-27,-25,-23,-18,-13,-5,0,0,-72,-66,-64.5,-60,-59,-55,-54,-52,-48,-48,-45,-44,-42,-42,-41,-40,-39.5,-38,-36,-35,-34,-29,-28,-24,-23,-18,-12,-5,0,0,0,-70,-65,-62,-61,-54,-54,-51,-49,-48,-45,-45,-44,-43,-40,-39.7,-39,-38,-35,-34,-33,-31,-28.7,-26,-23,-19,-14,-5,0,0,0,0,-63,-61,-60,-55,-54,-51,-50,-50,-47,-44,-43,-41,-39,-38,-37,-36,-36,-36,-33,-33,-31,-27,-24,-19,-12,-5,0,0,0,0,0,-60,-59,-55,-53,-50,-50,-49,-48,-45,-44,-41,-39.5,-39,-37,-36.5,-36,-34,-34,-32,-30.5,-29,-27,-20,-15,-8,-2,0,0,0,0,0,-58,-56.5,-54,-50,-50,-49,-48,-47,-44,-42,-39,-38.5,-37,-36,-36,-29.7,-33,-32,-31,-29,-27.7,-22,-16,-9,-2,0,0,0,0,0,0,-55,-53,-50,-49,-48,-47,-43,-44,-44,-40,-39,-38,-37,-36,-34,-33.5,-31,-30,-27.5,-26,-23,-17,-11,-2,0,0,0,0,0,0,0,-54,-51,-50,-47,-47,-47,-45,-45,-43,-41,-39,-37,-36,-35,-33,-32,-30,-29,-27,-24.5,-21,-15,-5,0,0,0,0,0,0,0,0,-53,-51,-48,-46,-44,-44.5,-43,-42,-41,-40,-36.5,-35,-34.5,-35,-18,-31,-29,-26,-24,-20,-13,-5,0,0,0,0,0,0,0,0,0,-52,-50,-47,-45,-44,-44,-43,-42,-40,-38,-36.5,-34,-32.5,-31,-31,-29.5,-26.7,-24.5,-20,-13,-7,0,0,0,0,0,0,0,0,0,0,-49.5,-49,-47,-45,-43,-41.5,-40,-39.5,-37.5,-34,-34,-33,-33,-32,-28.5,-28,-26,-21,-15,-8,-1,0,0,0,0,0,0,0,0,0,0,-49,-48,-46,-46,-44,-40,-41,-38.5,-37,-37,-36.5,-33,-32.5,-30,-27,-26,-22,-14,-10,-1,0,0,0,0,0,0,0,0,0,0,0,-47,-46,-45,-45,-44,-41,-40,-38,-37,-34,-33,-32.5,-31,-28.7,-26,-22,-19,-10,-3,0,0,0,0,0,0,0,0,0,0,0,0,-45,-44.5,-42,-42,-42,-40,-39,-37.5,-36,-32.5,-31,-31,-29,-26,-23,-20,-10,-5,0,0,0,0,0,0,0,0,0,0,0,0,0,-44,-45,-40,-40,-39,-38,-37.5,-35,-33,-31.5,-30,-29,-26,-24,-20,-12,-6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-43,-41,-39.5,-39,-38,-36,-35,-32,-32,-30,-28,-27,-24,-20,-12,-5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-40,-39,-39,-39,-36,-34,-32,-31,-30,-27,-26,-24,-20,-12,-5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-39,-38.5,-38,-38,-34,-33,-31,-30,-27,-25,-24,-21,-13,-6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-38,-37,-36.5,-34,-32,-31,-29.7,-28,-26,-24,-20.5,-14,-7,-2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-37,-37,-33.8,-33,-31,-29,-28.5,-26.7,-25.5,-20,-14,-7,-2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-34,-39,-33,-31,-29,-27,-27,-24,-21,-16,-7,-2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-34,-36,-33,-30,-28,-26,-26,-22,-15,-8,-2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-32,-32,-29,-27.5,-25.7,-25,-23,-15,-8,-2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-33,-30,-27,-26,-24,-21,-16,-9,-2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]),
            field(accessType='outputOnly',name='heightValuesOutput',type='MFFloat'),
            field(accessType='outputOnly',name='colorValuesOutput',type='MFColor')])]),
        #  A new configurable prototype is needed for surface coordinate grids. 
        Transform(scale=(250,250,250),translation=(2500,0,2500),
          children=[
          Inline(DEF='GridXZ_20x20Fixed',url=["../../../Savage/Tools/Authoring/GridXZ_20x20Fixed.x3d","https://savage.nps.edu/Savage/Tools/Authoring/GridXZ_20x20Fixed.x3d","../../../Savage/Tools/Authoring/GridXZ_20x20Fixed.wrl","https://savage.nps.edu/Savage/Tools/Authoring/GridXZ_20x20Fixed.wrl"])]),
        Transform(scale=(1000,1000,1000),
          children=[
          Inline(DEF='CoordinateAxes',url=["../../../Savage/Tools/Authoring/CoordinateAxes.x3d","../../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","../../../Savage/Tools/Authoring/CoordinateAxes.wrl","../../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl"])])])]
      #  GeoElevationGrid, georeferenced to latitude/longitude. Switched off, awaiting further work. 
      #  <Shape> <GeoElevationGrid geoGridOrigin="-117.5 33.2666666666667 1000000" geoSystem='"GD" "WE"' solid="false" xDimension="31" xSpacing="154" yScale="3.275" zDimension="29" zSpacing="184"/> </Shape> 
      ),
    #  HTML Color Codes Black = "#000000" = 0 0 0 Green = "#008000" = 0 0.5 0 Silver = "#C0C0C0" = 0.75 0.75 0.75 Lime = "#00FF00" = 0 1 0 Gray = "#808080" = 0.5 0.5 0.5 Olive = "#808000" = 0.5 0.5 0 White = "#FFFFFF" = 1 1 1 Yellow = "#FFFF00" = 1 1 0 Maroon = "#800000" = 0.5 0 0 Navy = "#000080" = 0 0 0.5 Red = "#FF0000" = 1 0 0 Blue = "#0000FF" = 0 0 1 Purple = "#800080" = 0.5 0 0.5 Teal = "#008080" = 0 0.5 0.5 Fuchsia = "#FF00FF" = 1 0 1 Aqua = "#00FFFF" = 0 1 1 
    #  MEDAL Color Codes depth 0-2m orange 2-3 yellow 3-4 bright green 4-5 cyan 5-6 magenta 6-7 tan 7-8 sky blue 8-9 red 9-10 grey 10-11 teal/seagreen 11-12 slateblue 12-13 olivedrab 13-14 black 14-20 navyblue 20-30 slategrey 0.5 0.5 0 1 0.5 0 1 1 0 0 1 0 0 1 1 1 0 1 0.75 0.75 0 1 0.5 0.5 1 0 0 0.5 0.5 0.5 0 0.5 0.5 0 0 0.25 0.5 0.5 0 0.1 0.1 0.1 0 0 0.5 0.25 0.25 0.25 
    ROUTE(fromField='heightValuesOutput',fromNode='CalculateColorSchemeMEDAL',toField='set_height',toNode='BathymetryGrid'),
    ROUTE(fromField='colorValuesOutput',fromNode='CalculateColorSchemeMEDAL',toField='set_color',toNode='BathymetryGridColorNodeCalculated')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ChartletTranscribed.py")
