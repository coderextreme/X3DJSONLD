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
    meta(content='ExampleCamouflageCobra.x3d',name='title'),
    meta(content="Instantiates an example of the Super Cobra AH-1Z Helicopter's prototype.",name='description'),
    meta(content='Jane Wu',name='creator'),
    meta(content='16 January 2001',name='created'),
    meta(content='16 February 2016',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/AH1SuperCobraUnitedStates/ExampleCamouflageCobra.x3d',name='identifier'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/AH1SuperCobraUnitedStates/SuperCobraPrototype.x3d',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ac/ah-1.htm',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/land/camo-wood.jpg',name='reference'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(appinfo='Prototype declaration for SuperCobra helicopter',name='SuperCobra',url=["SuperCobraPrototype.x3d#SuperCobra","https://savage.nps.edu/Savage/AircraftHelicopters/AH1SuperCobraUnitedStates/SuperCobraPrototype.x3d#SuperCobra","SuperCobraPrototype.wrl#SuperCobra","https://savage.nps.edu/Savage/AircraftHelicopters/AH1SuperCobraUnitedStates/SuperCobraPrototype.wrl#SuperCobra"],
      field=[
      field(accessType='initializeOnly',appinfo='color of tail boom',name='tailBoomColor',type='SFNode'),
      field(accessType='initializeOnly',appinfo='color of tail boom drive shaft',name='tailRotorDriveShaftColor',type='SFNode'),
      field(accessType='initializeOnly',appinfo='color of horizontal stabilizer',name='horizontalStabilizerColor',type='SFNode'),
      field(accessType='initializeOnly',appinfo='color of fuselage',name='fuselageColor',type='SFNode'),
      field(accessType='initializeOnly',appinfo='color of cockpit',name='cockpitColor',type='SFNode'),
      field(accessType='initializeOnly',appinfo='color of cowling',name='cowlingColor',type='SFNode'),
      field(accessType='initializeOnly',appinfo='name of specific helicopter',name='helicopterName',type='SFString'),
      field(accessType='inputOnly',appinfo='input event indicating that the aircraft is in flight',name='inFlight',type='SFBool')]),
    Transform(
      children=[
      TouchSensor(DEF='Sensor',description='touch to animate rotors'),
      ProtoInstance(DEF='ExampleHelicopter',name='SuperCobra',
        fieldValue=[
        fieldValue(name='tailBoomColor',
          children=[
          Appearance(
            texture=ImageTexture(DEF='CamoWoodTexture',url=["camo-wood.jpg","https://savage.nps.edu/Savage/AircraftHelicopters/AH1SuperCobraUnitedStates/camo-wood.jpg"]))]),
        fieldValue(name='tailRotorDriveShaftColor',
          children=[
          Appearance(
            texture=ImageTexture(USE='CamoWoodTexture'))]),
        fieldValue(name='horizontalStabilizerColor',
          children=[
          Appearance(
            texture=ImageTexture(USE='CamoWoodTexture'))]),
        fieldValue(name='fuselageColor',
          children=[
          Appearance(
            texture=ImageTexture(USE='CamoWoodTexture'))]),
        fieldValue(name='cockpitColor',
          children=[
          Appearance(
            texture=ImageTexture(USE='CamoWoodTexture'))]),
        fieldValue(name='cowlingColor',
          children=[
          Appearance(
            texture=ImageTexture(USE='CamoWoodTexture'))]),
        fieldValue(name='helicopterName',value='Camouflage Cobra')])]),
    ROUTE(fromField='isOver',fromNode='Sensor',toField='inFlight',toNode='ExampleHelicopter')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ExampleCamouflageCobra.py")
