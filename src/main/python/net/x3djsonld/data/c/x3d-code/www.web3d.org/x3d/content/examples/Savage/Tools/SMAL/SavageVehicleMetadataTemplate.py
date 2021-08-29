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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='SavageVehicleMetadataTemplate.x3d',name='title'),
    meta(content='This scene defines the exemplar template for Savage vehicle metadata, allowing further interoperability via SMAL constructs. Savage Modeling Analysis Language (SMAL) authoring capabilities for X3D assume proper metadata within a scene to identify an object properly. A corresponding native-XML .xsd schema for SMAL will also be developed to facilitate conversion and use of vehicle metadata.',name='description'),
    meta(content='Travis Rauch, Don Brutzman',name='creator'),
    meta(content='20 May 2005',name='created'),
    meta(content='28 February 2016',name='modified'),
    meta(content='add corresponding XML versions of metadata',name='TODO'),
    meta(content='http://x3dgraphics.com/chapters/Chapter15-MetadataInformation.html',name='reference'),
    meta(content='SMAL vehicle metadata',name='subject'),
    meta(content='SMAL.html',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Tools/SMAL/SMAL.html',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Tools/SMAL/SavageVehicleMetadataTemplate.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(skyColor=[(0,0.439216,0.760784)]),
    Viewpoint(description='View scene source to see metadata examples',position=(0,0,9)),
    Anchor(description='View source in browser',parameter=["target=_blank"],url=["SavageVehicleMetadataTemplate.html","https://savage.nps.edu/Savage/Tools/SMAL/SavageVehicleMetadataTemplate.html"],
      children=[
      Shape(
        geometry=Text(string=["View scene source","to see","metadata examples"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],style_='BOLD')),
        appearance=Appearance(
          material=Material(diffuseColor=(1,0.99,0.6)))),
      Shape(
        geometry=Box(size=(7,3,.001)),
        appearance=Appearance(
          material=Material(transparency=1))),
      TouchSensor(description='Select this text to view pretty-print documentation')]),
    WorldInfo(info=["https://savage.nps.edu/Savage/Tools/SMAL/SavageVehicleMetadataTemplate.x3d"],title='SavageVehicleMetadataTemplate',
      #  This initial MetadataSet is itself metadata for the parent WorldInfo, thus it has (omitted) default containerField='metadata' 
      metadata=MetadataSet(name='SMAL',reference='https://savage.nps.edu/Savage/Tools/SMAL/SMAL.html',
        #  All other SMAL Metadata nodes serve as values for their parent MetadataSet nodes, and thus have containerField='value' 
        value=[
        MetadataString(name='version',value=["1.0"],
          metadata=MetadataString(name='appinfo',value=["This is the version of SMAL employed, not of the model."])),
        MetadataSet(name='EntityDefinition',
          #  Identifying metadata for the current simulation of interest 
          value=[
          MetadataSet(name='Classification',
            metadata=MetadataString(name='level',value=["UNCLASSIFIED"],
              metadata=MetadataString(name='appinfo',value=["UNCLASSIFIED","FOUO","CONFIDENTIAL","SECRET"])),
            value=[
            MetadataString(name='reference',
              metadata=MetadataString(name='appinfo',value=["The published source of classified information, if any, contained in the Metadata."])),
            MetadataString(name='rationale',
              metadata=MetadataString(name='appinfo',value=["The specific element which contains the information classifying this document."]))]),
          MetadataSet(name='IdentificationParameters',
            value=[
            MetadataString(name='name',value=["provideVehicleName"],
              metadata=MetadataString(name='appinfo',value=["The plain language name of the vehicle this model represents, i.e. the base class (DDG-51), or vehicle designation (M1A2)."]))]),
          MetadataSet(name='X3DArchiveModel',
            metadata=MetadataString(name='appinfo',value=["This is a placeholder element which ensures the proper validation of autogenerated SMAL code."])),
          MetadataSet(name='PhysicalParameters',
            value=[
            MetadataSet(name='PhysicalConstraints',
              value=[
              MetadataFloat(name='height',value=[0],
                metadata=MetadataString(name='appinfo',value=["The maximum structural height of the object in meters. This may be used for clearance checking or other calculations."])),
              MetadataFloat(name='width',value=[0],
                metadata=MetadataString(name='appinfo',value=["The maximum width, beam, or wingspan of the vehicle in meters. This may be used for clearance checking or other calculations."])),
              MetadataFloat(name='length',value=[0],
                metadata=MetadataString(name='appinfo',value=["The maximum structural length of the object in meters. This may be used for clearance checking or other calculations."])),
              MetadataFloat(name='draft',value=[0],
                metadata=MetadataString(name='appinfo',value=["The vertical distance in meters from the deepest point (keel or other structure) to the waterline of a vehicle at its stated displacement or gross weight."])),
              MetadataFloat(name='wheelbase',value=[0],
                metadata=MetadataString(name='appinfo',value=["The longitudinal distance in meters from the center of the forwardmost roadwheel axle to the center of the rearmost roadwheel axle on this vehicle."])),
              MetadataFloat(name='trackWidth',value=[0],
                metadata=MetadataString(name='appinfo',value=["The horizontal distance in meters from the rightmost edge of the right wheel or track to the leftmost edge of the left wheel or track on this vehicle."])),
              MetadataFloat(name='grossWeight',value=[0],
                metadata=MetadataString(name='appinfo',value=["The standard operational weight of the vehicle in pounds or kilograms. This may be used in physics calculations."]))]),
            MetadataSet(name='DynamicResponseConstraints',
              value=[
              MetadataFloat(name='centerOfGravity',value=[0,0,0],
                metadata=MetadataString(name='appinfo',value=["Sets the Center of Gravity of the object as an (x, y, z) distance in meters from the physical center of the object, which is located at (0, 0, 0)."])),
              MetadataFloat(name='aerodynamicCenter',value=[0,0,0],
                metadata=MetadataString(name='appinfo',value=["Sets the Aerodynamic Center of the object as an (x, y, z) distance in meters from the physical center of the object, which is located at (0, 0, 0)."])),
              MetadataFloat(name='centerOfBuoyancy',value=[0,0,0],
                metadata=MetadataString(name='appinfo',value=["Sets the Center of Buoyancy of the object as an (x, y, z) distance in meters from the physical center of the object, which is located at (0, 0, 0)."])),
              MetadataFloat(name='maximumSpeed',value=[0],
                metadata=MetadataString(name='appinfo',value=["The maximum rated speed for this vehicle in mph or kph."])),
              MetadataFloat(name='cruiseSpeed',value=[0],
                metadata=MetadataString(name='appinfo',value=["The published cruise speed for this vehicle in mph or kph."])),
              MetadataFloat(name='maximumAltitude',value=[0],
                metadata=MetadataString(name='appinfo',value=["The absolute ceiling for this aircraft in feet or meters."])),
              MetadataFloat(name='cruiseAltitude',value=[0],
                metadata=MetadataString(name='appinfo',value=["The cruise ceiling for this aircraft in feet or meters."])),
              MetadataFloat(name='maximumDepth',value=[0],
                metadata=MetadataString(name='appinfo',value=["The absolute depth for this submersible in feet or meters."])),
              MetadataFloat(name='cruiseDepth',value=[0],
                metadata=MetadataString(name='appinfo',value=["The cruise depth for this submersible in feet or meters."])),
              MetadataFloat(name='maximumAcceleration',value=[0],
                metadata=MetadataString(name='appinfo',value=["The ideal maximum acceleration achievable by this vehicle in feet or meters per second squared, as in at maximum Power excess for aircraft."])),
              MetadataFloat(name='maximumDeceleration',value=[0],
                metadata=MetadataString(name='appinfo',value=["The ideal best braking performance achievable by this vehicle in feet or meters per second squared."])),
              MetadataFloat(name='minimumTurnRadius',value=[0],
                metadata=MetadataString(name='appinfo',value=["The minimum turning radius for this vehicle in feet or meters, as in at best cornering speed for aircraft."])),
              MetadataFloat(name='maximumTurnRate',value=[0],
                metadata=MetadataString(name='appinfo',value=["The maximum turning rate for this vehicle in degrees per second, as in at best cornering speed for aircraft."])),
              MetadataFloat(name='maximumFuelCapacity',value=[0],
                metadata=MetadataString(name='appinfo',value=["The maximum usable internal fuel capacity of this vehicle in liters."]))]),
            MetadataSet(name='TacticalConstraints',
              value=[
              MetadataFloat(name='maximumAirThreatRange',value=[0],
                metadata=MetadataString(name='appinfo',value=["The maximum effective range in miles or kilometers of the longest-range anti-aircraft weapon on this platform."])),
              MetadataFloat(name='maximumSurfaceThreatRange',value=[0],
                metadata=MetadataString(name='appinfo',value=["The maximum effective range in miles or kilometers of the longest-range anti-surface weapon on this platform."])),
              MetadataFloat(name='maximumSubsurfaceThreatRange',value=[0],
                metadata=MetadataString(name='appinfo',value=["The maximum effective range in miles or kilometers of the longest-range anti-submarine weapon on this platform."])),
              MetadataFloat(name='maximumAirDetectionRange',value=[0],
                metadata=MetadataString(name='appinfo',value=["The maximum detection range of the longest-range air detection sensor on this platform."])),
              MetadataFloat(name='maximumSurfaceDetectionRange',value=[0],
                metadata=MetadataString(name='appinfo',value=["The DIS enumeration for the overall type of this object (for vehicles this value should be 1)."])),
              MetadataFloat(name='maximumSubsurfaceDetectionRange',value=[0],
                metadata=MetadataString(name='appinfo',value=["The maximum detection range of the longest-range subsurface detection sensor on this platform."]))])]),
          MetadataSet(name='CurrentConditionParameters',
            #  <MetadataString name="appinfo" value="This is a placeholder element which ensures the proper validation of autogenerated SMAL code."/> 
            ),
          MetadataSet(name='NetworkedCommunicationParameterSet',
            value=[
            MetadataSet(name='DisConfiguration',
              value=[
              MetadataInteger(name='entityKind',value=[1],
                metadata=MetadataString(name='appinfo',value=["The DIS enumeration for the overall type of this object (for vehicles this value should be 1)."])),
              MetadataInteger(name='entityDomain',value=[1],
                metadata=MetadataString(name='appinfo',value=["The DIS enumeration for the domain of operations of this object (air, surface, sub-surface, etc.)."])),
              MetadataInteger(name='entityCountry',value=[225],
                metadata=MetadataString(name='appinfo',value=["The DIS enumeration for the country of origin of this object (the value for United States is 225)."])),
              MetadataInteger(name='entityCategory',value=[1],
                metadata=MetadataString(name='appinfo',value=["The DIS enumeration for the type of this vehicle (cruiser or destroyer, tank or truck, bomber or fighter, etc.)."])),
              MetadataInteger(name='entitySubCategory',value=[1],
                metadata=MetadataString(name='appinfo',value=["The DIS enumeration for the class designation of this vehicle (CG-47 Ticonderoga, DDG-51 Arleigh Burke, M1A2, M880, B-52, F-22, etc."])),
              MetadataInteger(name='entitySpecific',value=[1],
                metadata=MetadataString(name='appinfo',value=["The DIS enumeration for the specific unit or variant of this object (CG-68, DDG-77, HMMVW w/TOW package, etc.)."])),
              MetadataInteger(name='entityExtra',value=[1],
                metadata=MetadataString(name='appinfo',value=["The DIS enumeration for optional equipment or configurations for this vehicle."]))])])])]))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SavageVehicleMetadataTemplate.py")
