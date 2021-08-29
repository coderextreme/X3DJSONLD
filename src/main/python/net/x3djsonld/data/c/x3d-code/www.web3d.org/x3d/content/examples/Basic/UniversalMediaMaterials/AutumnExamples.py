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
    meta(content='AutumnExamples.x3d',name='title'),
    meta(content="Example ExternProtoDeclare/ProtoInstance usage of X3D/VRML materials, originally converted from SGI's Open Inventor material examples.",name='description'),
    meta(content='David Roussel',name='creator'),
    meta(content='James Harney, Don Brutzman NPS',name='translator'),
    meta(content='7 April 2002',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://vrmlstuff.free.fr/materials',name='reference'),
    meta(content='Universal Media Material Library',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnExamples.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='AutumnExamples.x3d'),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn00',url=["AutumnPrototypes.x3d#Autumn00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.x3d#Autumn00","AutumnPrototypes.wrl#Autumn00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.wrl#Autumn00"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn01',url=["AutumnPrototypes.x3d#Autumn01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.x3d#Autumn01","AutumnPrototypes.wrl#Autumn01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.wrl#Autumn01"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn02',url=["AutumnPrototypes.x3d#Autumn02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.x3d#Autumn02","AutumnPrototypes.wrl#Autumn02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.wrl#Autumn02"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn03',url=["AutumnPrototypes.x3d#Autumn03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.x3d#Autumn03","AutumnPrototypes.wrl#Autumn03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.wrl#Autumn03"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn04',url=["AutumnPrototypes.x3d#Autumn04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.x3d#Autumn04","AutumnPrototypes.wrl#Autumn04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.wrl#Autumn04"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn05',url=["AutumnPrototypes.x3d#Autumn05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.x3d#Autumn05","AutumnPrototypes.wrl#Autumn05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.wrl#Autumn05"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn06',url=["AutumnPrototypes.x3d#Autumn06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.x3d#Autumn06","AutumnPrototypes.wrl#Autumn06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.wrl#Autumn06"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn07',url=["AutumnPrototypes.x3d#Autumn07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.x3d#Autumn07","AutumnPrototypes.wrl#Autumn07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.wrl#Autumn07"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn08',url=["AutumnPrototypes.x3d#Autumn08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.x3d#Autumn08","AutumnPrototypes.wrl#Autumn08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.wrl#Autumn08"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn09',url=["AutumnPrototypes.x3d#Autumn09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.x3d#Autumn09","AutumnPrototypes.wrl#Autumn09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.wrl#Autumn09"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn10',url=["AutumnPrototypes.x3d#Autumn10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.x3d#Autumn10","AutumnPrototypes.wrl#Autumn10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.wrl#Autumn10"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn11',url=["AutumnPrototypes.x3d#Autumn11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.x3d#Autumn11","AutumnPrototypes.wrl#Autumn11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.wrl#Autumn11"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn12',url=["AutumnPrototypes.x3d#Autumn12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.x3d#Autumn12","AutumnPrototypes.wrl#Autumn12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.wrl#Autumn12"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn13',url=["AutumnPrototypes.x3d#Autumn13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.x3d#Autumn13","AutumnPrototypes.wrl#Autumn13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.wrl#Autumn13"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn14',url=["AutumnPrototypes.x3d#Autumn14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.x3d#Autumn14","AutumnPrototypes.wrl#Autumn14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.wrl#Autumn14"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn15',url=["AutumnPrototypes.x3d#Autumn15","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.x3d#Autumn15","AutumnPrototypes.wrl#Autumn15","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.wrl#Autumn15"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn16',url=["AutumnPrototypes.x3d#Autumn16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.x3d#Autumn16","AutumnPrototypes.wrl#Autumn16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.wrl#Autumn16"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn17',url=["AutumnPrototypes.x3d#Autumn17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.x3d#Autumn17","AutumnPrototypes.wrl#Autumn17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.wrl#Autumn17"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn18',url=["AutumnPrototypes.x3d#Autumn18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.x3d#Autumn18","AutumnPrototypes.wrl#Autumn18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.wrl#Autumn18"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn19',url=["AutumnPrototypes.x3d#Autumn19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.x3d#Autumn19","AutumnPrototypes.wrl#Autumn19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.wrl#Autumn19"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn20',url=["AutumnPrototypes.x3d#Autumn20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.x3d#Autumn20","AutumnPrototypes.wrl#Autumn20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.wrl#Autumn20"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn21',url=["AutumnPrototypes.x3d#Autumn21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.x3d#Autumn21","AutumnPrototypes.wrl#Autumn21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.wrl#Autumn21"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn22',url=["AutumnPrototypes.x3d#Autumn22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.x3d#Autumn22","AutumnPrototypes.wrl#Autumn22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.wrl#Autumn22"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn23',url=["AutumnPrototypes.x3d#Autumn23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.x3d#Autumn23","AutumnPrototypes.wrl#Autumn23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.wrl#Autumn23"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn24',url=["AutumnPrototypes.x3d#Autumn24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.x3d#Autumn24","AutumnPrototypes.wrl#Autumn24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.wrl#Autumn24"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn25',url=["AutumnPrototypes.x3d#Autumn25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.x3d#Autumn25","AutumnPrototypes.wrl#Autumn25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.wrl#Autumn25"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn26',url=["AutumnPrototypes.x3d#Autumn26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.x3d#Autumn26","AutumnPrototypes.wrl#Autumn26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.wrl#Autumn26"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn27',url=["AutumnPrototypes.x3d#Autumn27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.x3d#Autumn27","AutumnPrototypes.wrl#Autumn27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.wrl#Autumn27"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn28',url=["AutumnPrototypes.x3d#Autumn28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.x3d#Autumn28","AutumnPrototypes.wrl#Autumn28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.wrl#Autumn28"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn29',url=["AutumnPrototypes.x3d#Autumn29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.x3d#Autumn29","AutumnPrototypes.wrl#Autumn29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.wrl#Autumn29"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn30',url=["AutumnPrototypes.x3d#Autumn30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.x3d#Autumn30","AutumnPrototypes.wrl#Autumn30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.wrl#Autumn30"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn31',url=["AutumnPrototypes.x3d#Autumn31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.x3d#Autumn31","AutumnPrototypes.wrl#Autumn31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.wrl#Autumn31"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn32',url=["AutumnPrototypes.x3d#Autumn32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.x3d#Autumn32","AutumnPrototypes.wrl#Autumn32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.wrl#Autumn32"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn33',url=["AutumnPrototypes.x3d#Autumn33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.x3d#Autumn33","AutumnPrototypes.wrl#Autumn33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.wrl#Autumn33"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Autumn34',url=["AutumnPrototypes.x3d#Autumn34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.x3d#Autumn34","AutumnPrototypes.wrl#Autumn34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.wrl#Autumn34"]),
    Group(
      children=[
      NavigationInfo(headlight=False),
      Viewpoint(DEF='Front',description='Front view',position=(0.0,0.0,12.0)),
      Viewpoint(DEF='PersRight',description='Low Right',orientation=(0.74291,0.30772,0.59447,1.2171),position=(6.9282,-6.9282,6.9282)),
      Viewpoint(DEF='PersLeft',description='Low Left',orientation=(0.74291,-0.30772,-0.59447,1.2171),position=(-6.9282,-6.9282,6.9282)),
      Viewpoint(DEF='Back',description='Back view',orientation=(0.0,1.0,0.0,3.1416),position=(0.0,0.0,-12.0)),
      Transform(DEF='Close_travel',
        children=[
        PositionInterpolator(DEF='Close_Mover',key=[0.0,0.25,0.5,0.75,1.0],keyValue=[(0.0,2.5,0.0),(0.0,0.0,0.0),(0.0,-2.5,0.0),(0.0,0.0,0.0),(0.0,2.5,0.0)]),
        TimeSensor(DEF='Close_Time',cycleInterval=12.0,loop=True),
        Viewpoint(DEF='Close',description='Close Front',position=(0.0,0.0,6.0))]),
      DirectionalLight(direction=(1.0,-1.0,-1.0)),
      DirectionalLight(direction=(0.0,1.0,-0.5),intensity=0.5),
      Anchor(description='Back to front view',url=["#Front"],
        children=[
        Transform(translation=(0.0,0.0,-0.5),
          children=[
          Inline(url=["gridBack.x3d","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.x3d","gridBack.wrl","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.wrl"])])]),
      Viewpoint(DEF='View00',description='Autumn00',position=(-3.75,3.75,3.0)),
      Transform(translation=(-3.75,3.75,0.0),
        children=[
        Anchor(description='Autumn00 view',url=["#View00"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Autumn00')),
            geometry=Sphere(DEF='Ball',radius=0.5))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Autumn00',parameter=["target=_source"],url=["AutumnPrototypes.html#ProtoDeclare_Autumn00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.html#ProtoDeclare_Autumn00"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(DEF='TextMat',diffuseColor=(1.0,1.0,1.0))),
              geometry=Text(string=["Autumn00"],
                fontStyle=FontStyle(DEF='Style',family=["SANS"],justify=["MIDDLE","MIDDLE"],size=0.3,style_='BOLD')))])])]),
      Viewpoint(DEF='View01',description='Autumn01',position=(-2.25,3.75,3.0)),
      Transform(translation=(-2.25,3.75,0.0),
        children=[
        Anchor(description='Autumn01 view',url=["#View01"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Autumn01')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Autumn01',parameter=["target=_source"],url=["AutumnPrototypes.html#ProtoDeclare_Autumn01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.html#ProtoDeclare_Autumn01"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Autumn01"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View02',description='Autumn02',position=(-0.75,3.75,3.0)),
      Transform(translation=(-0.75,3.75,0.0),
        children=[
        Anchor(description='Autumn02 view',url=["#View02"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Autumn02')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Autumn02',parameter=["target=_source"],url=["AutumnPrototypes.html#ProtoDeclare_Autumn02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.html#ProtoDeclare_Autumn02"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Autumn02"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View03',description='Autumn03',position=(0.75,3.75,3.0)),
      Transform(translation=(0.75,3.75,0.0),
        children=[
        Anchor(description='Autumn03 view',url=["#View03"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Autumn03')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Autumn03',parameter=["target=_source"],url=["AutumnPrototypes.html#ProtoDeclare_Autumn03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.html#ProtoDeclare_Autumn03"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Autumn03"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View04',description='Autumn04',position=(2.25,3.75,3.0)),
      Transform(translation=(2.25,3.75,0.0),
        children=[
        Anchor(description='Autumn04 view',url=["#View04"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Autumn04')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Autumn04',parameter=["target=_source"],url=["AutumnPrototypes.html#ProtoDeclare_Autumn04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.html#ProtoDeclare_Autumn04"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Autumn04"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View05',description='Autumn05',position=(3.75,3.75,3.0)),
      Transform(translation=(3.75,3.75,0.0),
        children=[
        Anchor(description='Autumn05 view',url=["#View05"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Autumn05')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Autumn05',parameter=["target=_source"],url=["AutumnPrototypes.html#ProtoDeclare_Autumn05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.html#ProtoDeclare_Autumn05"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Autumn05"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View06',description='Autumn06',position=(-3.75,2.25,3.0)),
      Transform(translation=(-3.75,2.25,0.0),
        children=[
        Anchor(description='Autumn06 view',url=["#View06"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Autumn06')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Autumn06',parameter=["target=_source"],url=["AutumnPrototypes.html#ProtoDeclare_Autumn06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.html#ProtoDeclare_Autumn06"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Autumn06"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View07',description='Autumn07',position=(-2.25,2.25,3.0)),
      Transform(translation=(-2.25,2.25,0.0),
        children=[
        Anchor(description='Autumn07 view',url=["#View07"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Autumn07')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Autumn07',parameter=["target=_source"],url=["AutumnPrototypes.html#ProtoDeclare_Autumn07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.html#ProtoDeclare_Autumn07"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Autumn07"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View08',description='Autumn08',position=(-0.75,2.25,3.0)),
      Transform(translation=(-0.75,2.25,0.0),
        children=[
        Anchor(description='Autumn08 view',url=["#View08"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Autumn08')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Autumn08',parameter=["target=_source"],url=["AutumnPrototypes.html#ProtoDeclare_Autumn08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.html#ProtoDeclare_Autumn08"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Autumn08"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View09',description='Autumn09',position=(0.75,2.25,3.0)),
      Transform(translation=(0.75,2.25,0.0),
        children=[
        Anchor(description='Autumn09 view',url=["#View09"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Autumn09')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Autumn09',parameter=["target=_source"],url=["AutumnPrototypes.html#ProtoDeclare_Autumn09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.html#ProtoDeclare_Autumn09"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Autumn09"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View10',description='Autumn10',position=(2.25,2.25,3.0)),
      Transform(translation=(2.25,2.25,0.0),
        children=[
        Anchor(description='Autumn10 view',url=["#View10"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Autumn10')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Autumn10',parameter=["target=_source"],url=["AutumnPrototypes.html#ProtoDeclare_Autumn10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.html#ProtoDeclare_Autumn10"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Autumn10"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View11',description='Autumn11',position=(3.75,2.25,3.0)),
      Transform(translation=(3.75,2.25,0.0),
        children=[
        Anchor(description='Autumn11 view',url=["#View11"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Autumn11')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Autumn11',parameter=["target=_source"],url=["AutumnPrototypes.html#ProtoDeclare_Autumn11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.html#ProtoDeclare_Autumn11"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Autumn11"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View12',description='Autumn12',position=(-3.75,0.75,3.0)),
      Transform(translation=(-3.75,0.75,0.0),
        children=[
        Anchor(description='Autumn12 view',url=["#View12"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Autumn12')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Autumn12',parameter=["target=_source"],url=["AutumnPrototypes.html#ProtoDeclare_Autumn12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.html#ProtoDeclare_Autumn12"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Autumn12"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View13',description='Autumn13',position=(-2.25,0.75,3.0)),
      Transform(translation=(-2.25,0.75,0.0),
        children=[
        Anchor(description='Autumn13 view',url=["#View13"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Autumn13')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Autumn13',parameter=["target=_source"],url=["AutumnPrototypes.html#ProtoDeclare_Autumn13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.html#ProtoDeclare_Autumn13"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Autumn13"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View14',description='Autumn14',position=(-0.75,0.75,3.0)),
      Transform(translation=(-0.75,0.75,0.0),
        children=[
        Anchor(description='Autumn14 view',url=["#View14"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Autumn14')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Autumn14',parameter=["target=_source"],url=["AutumnPrototypes.html#ProtoDeclare_Autumn14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.html#ProtoDeclare_Autumn14"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Autumn14"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View15',description='Autumn15',position=(0.75,0.75,3.0)),
      Transform(translation=(0.75,0.75,0.0),
        children=[
        Anchor(description='Autumn15 view',url=["#View15"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Autumn15')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Autumn15',parameter=["target=_source"],url=["AutumnPrototypes.html#ProtoDeclare_Autumn15","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.html#ProtoDeclare_Autumn15"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Autumn15"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View16',description='Autumn16',position=(2.25,0.75,3.0)),
      Transform(translation=(2.25,0.75,0.0),
        children=[
        Anchor(description='Autumn16 view',url=["#View16"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Autumn16')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Autumn16',parameter=["target=_source"],url=["AutumnPrototypes.html#ProtoDeclare_Autumn16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.html#ProtoDeclare_Autumn16"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Autumn16"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View17',description='Autumn17',position=(3.75,0.75,3.0)),
      Transform(translation=(3.75,0.75,0.0),
        children=[
        Anchor(description='Autumn17 view',url=["#View17"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Autumn17')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Autumn17',parameter=["target=_source"],url=["AutumnPrototypes.html#ProtoDeclare_Autumn17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.html#ProtoDeclare_Autumn17"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Autumn17"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View18',description='Autumn18',position=(-3.75,-0.75,3.0)),
      Transform(translation=(-3.75,-0.75,0.0),
        children=[
        Anchor(description='Autumn18 view',url=["#View18"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Autumn18')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Autumn18',parameter=["target=_source"],url=["AutumnPrototypes.html#ProtoDeclare_Autumn8","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.html#ProtoDeclare_Autumn18"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Autumn18"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View19',description='Autumn19',position=(-2.25,-0.75,3.0)),
      Transform(translation=(-2.25,-0.75,0.0),
        children=[
        Anchor(description='Autumn19 view',url=["#View19"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Autumn19')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Autumn19',parameter=["target=_source"],url=["AutumnPrototypes.html#ProtoDeclare_Autumn19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.html#ProtoDeclare_Autumn19"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Autumn19"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View20',description='Autumn20',position=(-0.75,-0.75,3.0)),
      Transform(translation=(-0.75,-0.75,0.0),
        children=[
        Anchor(description='Autumn20 view',url=["#View20"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Autumn20')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Autumn20',parameter=["target=_source"],url=["AutumnPrototypes.html#ProtoDeclare_Autumn20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.html#ProtoDeclare_Autumn20"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Autumn20"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View21',description='Autumn21',position=(0.75,-0.75,3.0)),
      Transform(translation=(0.75,-0.75,0.0),
        children=[
        Anchor(description='Autumn21 view',url=["#View21"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Autumn21')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Autumn21',parameter=["target=_source"],url=["AutumnPrototypes.html#ProtoDeclare_Autumn21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.html#ProtoDeclare_Autumn21"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Autumn21"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View22',description='Autumn22',position=(2.25,-0.75,3.0)),
      Transform(translation=(2.25,-0.75,0.0),
        children=[
        Anchor(description='Autumn22 view',url=["#View22"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Autumn22')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Autumn22',parameter=["target=_source"],url=["AutumnPrototypes.html#ProtoDeclare_Autumn22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.html#ProtoDeclare_Autumn22"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Autumn22"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View23',description='Autumn23',position=(3.75,-0.75,3.0)),
      Transform(translation=(3.75,-0.75,0.0),
        children=[
        Anchor(description='Autumn23 view',url=["#View23"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Autumn23')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Autumn23',parameter=["target=_source"],url=["AutumnPrototypes.html#ProtoDeclare_Autumn23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.html#ProtoDeclare_Autumn23"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Autumn23"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View24',description='Autumn24',position=(-3.75,-2.25,3.0)),
      Transform(translation=(-3.75,-2.25,0.0),
        children=[
        Anchor(description='Autumn24 view',url=["#View24"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Autumn24')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Autumn24',parameter=["target=_source"],url=["AutumnPrototypes.html#ProtoDeclare_Autumn4","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.html#ProtoDeclare_Autumn24"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Autumn24"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View25',description='Autumn25',position=(-2.25,-2.25,3.0)),
      Transform(translation=(-2.25,-2.25,0.0),
        children=[
        Anchor(description='Autumn25 view',url=["#View25"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Autumn25')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Autumn25',parameter=["target=_source"],url=["AutumnPrototypes.html#ProtoDeclare_Autumn25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.html#ProtoDeclare_Autumn25"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Autumn25"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View26',description='Autumn26',position=(-0.75,-2.25,3.0)),
      Transform(translation=(-0.75,-2.25,0.0),
        children=[
        Anchor(description='Autumn26 view',url=["#View26"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Autumn26')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Autumn26',parameter=["target=_source"],url=["AutumnPrototypes.html#ProtoDeclare_Autumn6","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.html#ProtoDeclare_Autumn26"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Autumn26"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View27',description='Autumn27',position=(0.75,-2.25,3.0)),
      Transform(translation=(0.75,-2.25,0.0),
        children=[
        Anchor(description='Autumn27 view',url=["#View27"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Autumn27')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Autumn27',parameter=["target=_source"],url=["AutumnPrototypes.html#ProtoDeclare_Autumn27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.html#ProtoDeclare_Autumn27"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Autumn27"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View28',description='Autumn28',position=(2.25,-2.25,3.0)),
      Transform(translation=(2.25,-2.25,0.0),
        children=[
        Anchor(description='Autumn28 view',url=["#View28"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Autumn28')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Autumn28',parameter=["target=_source"],url=["AutumnPrototypes.html#ProtoDeclare_Autumn28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.html#ProtoDeclare_Autumn28"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Autumn28"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View29',description='Autumn29',position=(3.75,-2.25,3.0)),
      Transform(translation=(3.75,-2.25,0.0),
        children=[
        Anchor(description='Autumn29 view',url=["#View29"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Autumn29')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Autumn29',parameter=["target=_source"],url=["AutumnPrototypes.html#ProtoDeclare_Autumn29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.html#ProtoDeclare_Autumn29"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Autumn29"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View30',description='Autumn30',position=(-3.75,-3.75,3.0)),
      Transform(translation=(-3.75,-3.75,0.0),
        children=[
        Anchor(description='Autumn30 view',url=["#View30"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Autumn30')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Autumn30',parameter=["target=_source"],url=["AutumnPrototypes.html#ProtoDeclare_Autumn30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.html#ProtoDeclare_Autumn30"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Autumn30"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View31',description='Autumn31',position=(-2.25,-3.75,3.0)),
      Transform(translation=(-2.25,-3.75,0.0),
        children=[
        Anchor(description='Autumn31 view',url=["#View31"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Autumn31')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Autumn31',parameter=["target=_source"],url=["AutumnPrototypes.html#ProtoDeclare_Autumn31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.html#ProtoDeclare_Autumn31"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Autumn31"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View32',description='Autumn32',position=(-0.75,-3.75,3.0)),
      Transform(translation=(-0.75,-3.75,0.0),
        children=[
        Anchor(description='Autumn32 view',url=["#View32"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Autumn32')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Autumn32',parameter=["target=_source"],url=["AutumnPrototypes.html#ProtoDeclare_Autumn32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.html#ProtoDeclare_Autumn32"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Autumn32"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View33',description='Autumn33',position=(0.75,-3.75,3.0)),
      Transform(translation=(0.75,-3.75,0.0),
        children=[
        Anchor(description='Autumn33 view',url=["#View33"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Autumn33')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Autumn33',parameter=["target=_source"],url=["AutumnPrototypes.html#ProtoDeclare_Autumn33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.html#ProtoDeclare_Autumn33"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Autumn33"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View34',description='Autumn34',position=(2.25,-3.75,3.0)),
      Transform(translation=(2.25,-3.75,0.0),
        children=[
        Anchor(description='Autumn34 view',url=["#View34"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Autumn34')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Autumn34',parameter=["target=_source"],url=["AutumnPrototypes.html#ProtoDeclare_Autumn34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/AutumnPrototypes.html#ProtoDeclare_Autumn34"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Autumn34"],
                fontStyle=FontStyle(USE='Style')))])])])]),
    ROUTE(fromField='fraction_changed',fromNode='Close_Time',toField='set_fraction',toNode='Close_Mover'),
    ROUTE(fromField='value_changed',fromNode='Close_Mover',toField='set_translation',toNode='Close_travel')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for AutumnExamples.py")
